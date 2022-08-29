# MPLAB IDE generated this makefile for use with GNU make.
# Project: Bytes_Counter.mcp
# Date: Thu Aug 12 20:26:16 2021

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

Bytes_Counter.cof : source.o
	$(LD) /p18F14K50 /l"C:\Program Files (x86)\Microchip\mplabc18\v3.47\lib" "source.o" /u_CRUNTIME /z__MPLAB_BUILD=1 /o"Bytes_Counter.cof" /M"Bytes_Counter.map" /W

source.o : source.c ../../../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.47/h/delays.h source.c ../../../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.47/h/p18f14k50.h
	$(CC) -p=18F14K50 "source.c" -fo="source.o" -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "source.o" "Bytes_Counter.cof" "Bytes_Counter.hex"

