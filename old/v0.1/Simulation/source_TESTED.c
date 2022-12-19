/*	Making Devices 2021
	https://makingdevices.com
	Rubén García Segovia
	Tally Counter
*/

/* Working method

	press + / press - button: Increase/Decrease count

	Long press +: Sound event -> activate/deactivate sound buzzer every button pulsation.
	Long press -: Reset event -> Reset the count.

	60s without pressing any button: Deep Sleep mode -> Display is off and saving mode is activated. The count is keept

	Any button pulsation in Deep Sleep Mode: Count as normal AND reactivate the device. 
*/

#include <p18f14k50.h>
#include <delays.h>

 // setup config bits 
 #pragma config PCLKEN=OFF
 #pragma config FOSC = IRC
 #pragma config BOREN = OFF 
 #pragma config WDTEN = OFF 
 #pragma config LVP = OFF  

char digit = 0;
char const vector[] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01100111,0b01111001}; //Numbers 8-segment codification
char number[] = {0,0,0,0}; //Number Storage
char buzz = 0; //Buzzer counter
int reset = 0; //Reset event counter
int deep_sleep = 0; //Deep Sleep counter
int buzz_reset = 0;  //Enable-disable buzz event counter
char buzz_en = 1; //Buzzer enable
int sleep_time = 12000; //Time before deep sleep
int buzzer_time = 15; //Time for the buzzer sound
int event_timer = 1000; //The time we need to mantain pressed the botons to execute reset/sound events.
void InitOSC(void); 
void _low_isr (void);
void _high_isr (void);
void Interrupts_enable (void);

#pragma code low_vector=0x18 //Low interrupt priority starts at 0x18
void low_interrupt(void)
{
_asm goto _low_isr _endasm
}

#pragma code high_vector=0x08 //High interrupt priority starts at 0x08
void high_interrupt(void)
{
_asm goto _high_isr _endasm
}
#pragma code


#pragma interrupt _low_isr

void _low_isr (void){

}

#pragma interrupt _high_isr
void _high_isr (void)   //High priority interrupt.
{
char i=0; 

if(PORTAbits.RA1 == 0){  //If we are pressing one boton...
	reset++; //We increase reset.
	if (reset>event_timer){ //If we have the button pressed for a while...
		buzz = 1;   //We activate buzz and LED
		LATA = 0b00110000;
		number[0] = 0;   //We reset the count.
		number[1] = 0;
		number[2] = 0;
		number[3] = 0;
		reset = 1;
	}
} else{	
	reset = 0; //If we are not pressing nothing, reset = 0.
}
if(PORTAbits.RA0 == 0){  //Same as before with enable-disable buzz event
	buzz_reset++;
	if (buzz_reset>event_timer){
		buzz = 1;
		LATA = 0b00110000;
		buzz_en = !buzz_en;
		buzz_reset = 1;
	}
} else{	
	buzz_reset = 0;
}

if(INTCONbits.TMR0IF) //Timer0 interrupt
	{

	TMR0H = 0xB1;	//We set the timer0 again
	TMR0L = 0xE0;

	if(buzz > 0) {  //If the buzzer was activated
		buzz++; //increase buzz time
	} 
	if(buzz > buzzer_time) { //If the buzzer has been activated long enough
		buzz = 0;	//we stop the buzzer
		PORTA = 0;
	} 

	switch(digit){  //Print the numbers over the display
		case 3:		//we light the correct display
			LATB = 0x00; //We turn off all the displays
			LATB = 0b10001111; 
			digit = 0;
			break;
		case 0:
			LATB = 0x00; //..
			LATB = 0b01001111; 
			digit = 1;
			break;
		case 1:
			LATB = 0x00; //..
			LATB = 0b00101111; 
			digit = 2;
			break;
		case 2:
			LATB = 0x00; //..
			LATB = 0b00011111; 
			digit = 3;
			break;
		default:
			break;
	}
	LATC = vector[number[digit]];  //we write the correct number depending on the display.
	INTCONbits.TMR0IF = 0; // reset overflow bit (for timer0).
	}	

 if(INTCONbits.RABIF) //if we are pressing a button...
      { 
	  	deep_sleep = 0; //We restart the deep sleep counter
		OSCCONbits.IDLEN = 1; //Set idle mode. 

		  if(PORTAbits.RA0 == 0 && buzz == 0){ //Increase the number if the "+" button is pressed
			 if(!(number[3] == 9 && number[2] == 9 && number[1] == 9 && number[0] == 9)) number[0]++;
		  	 if(buzz_en == 1) LATA = 0b00100000;
		     buzz = 1;
		  }
			
		  if(PORTAbits.RA1 == 0 && buzz == 0){ //Decrease the number if the "-" button is pressed
			 if(!(number[3] == 0 && number[2] == 0 && number[1] == 0 && number[0] == 0)) number[0]--;
		     if(buzz_en == 1) LATA = 0b00100000;
		     buzz = 1;
		  }	

		  for(i=0; i<4;i++){ //In case a number gets higher than 9
			if(number[i]>9){
				number[i+1]++;
				number[i] = 0;
			}
			if(number[i]<0){ //In case a number gets lower than 0
				number[i+1]--;
				number[i] = 9;
			}
		  }
          INTCONbits.RABIF = 0;	//Clear RAB Interrupt Flag 

		//Note: We also use "buzz" variable as a anti-bounce software method, as we only read the bottons every buzzer_time timer0 events.
      }

	deep_sleep++;  //We increase time before sleep

	if (deep_sleep > sleep_time){ //If the time for sleep has come
		OSCCONbits.IDLEN = 0; //Prepare the microchip for deep sleep.
		LATB = 0b00001111; //turn off the display
	}
}

/* ****************** MAIN ****************** */
char init = 0;
void main(void)
{
	if(init == 0){
		InitOSC();     //Internal OSC 16MHz 
    	Interrupts_enable(); //Enable RA0 & RA1 interrupts
		TRISB =0; //Set port B as output
		TRISC =0; //Set port C as output
		init = 1; //We only run this loop once.
		OSCCONbits.IDLEN = 1; //We activate idle mode.
	}
	Sleep(); //Sleep either idle or deep mode!  
}

 void InitOSC(void) 
 {    
      OSCCON  = 0b11110100;   //Internal 16MHz    
 } 

 void Interrupts_enable(void) 
 {    
	TRISA = 0b11001111; //A port as input
	PORTA = 0;
    INTCON2bits.RABPU = 0; // Enable Pull-UP on port A-B
    INTCON2bits.RABIP = 1; // Change on port = High priority
	IOCA  = 0b00000011;        //Enable Interrupt on Change for Pin 4 of Port A 
    INTCONbits.RABIE = 1;      //Enable RA and RB Port Change Interrupt 

	T0CONbits.T08BIT = 0;    //Timer 0 configuration
	T0CONbits.T0CS = 0;
	T0CONbits.PSA = 1;
	TMR0H = 0xB1;
	TMR0L = 0xE0;
	T0CONbits.TMR0ON = 1;

	RCONbits.IPEN       = 1;    //Enable Interrupt Priorities
    INTCONbits.GIEL     = 1;    //Enable Low Priority Interrupt
    INTCONbits.GIEH     = 1;    //Enable high priority interrupts        
    INTCONbits.TMR0IE   = 1;    //Enable Timer0 Interrupt
	INTCONbits.T0IE     = 1;   
    INTCON2bits.TMR0IP  = 1;    //TMR0 set to low Priority Interrupt
    INTCONbits.TMR0IF = 0;  // T0 int flag bit cleared before starting
    T0CONbits.TMR0ON = 1;   // timer0 START
	INTCONbits.GIE = 1; 		   //Enable all unmasked interrupts   
 } 
 
 


