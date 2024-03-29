<!-- Improved compatibility of back to top link: See: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a name="readme-top"></a>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Instagram][ig-shield]][ig-url]
[![PCBWAY][sponsor-shield]][sponsor-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://makingdevices.com/links/">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

<h3 align="center">Making Devices</h3>

  <p align="center">
    Open Source projects where we struggle with engineering, electronics, coding and who knows what else... In this case, Bytes Counter is a very simple digital tally counter, so hopefully you may find it interesting ;)
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#Build-one">Build one</a>
      <ul>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#Sponsor">Sponsor</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

[![Bytes Counter Shot][product-screenshot]](https://makingdevices.com/Bytes-Counter)

Bytes Counter is a simple Tally Counter for counting people in places, helping you in inventories, practising soldering or just counting things at work! The project was chosen to test some PCB manufacturer capabilities and experiment with both the XLP (Extreme Low-Power Technology) and the pic18LF14k50 itself

The PCB does not have any power button, since the project's approach is to use the XLP technology of the PIC. It only has two buttons: increase/decrease the count.

A buzzer helps you count anything without needing to read the display every time so that you can focus on your work.

Even after weeks or months, the count is kept while in deep sleep mode.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

[![Microcontroller][PIC]][PIC-url]
[![MPLAB C][MPLAB-C]][MPLAB-C-url]
[![Kicad][kicad-shield]][kicad-url]
[![SPONSOR][sponsor-icon]][sponsor-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->

## Build one

1. Get the gerber files for the latest version: [V1](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/Gerber/BytesCounterV1.zip) 
2. Send them to a PCB manufacturer ([Our Sponsor is PCBWAY][sponsor-url])
3. Buy all the components from the [Bill Of Materials](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/BytesCounter_BOM.xlsx)
4. Solder everything with the help of the [schematic](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/schematicv1.pdf)
5. Burn the [latest firmware](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/Simulation/Bytes_Counter.hex)
6. Give us a Star to the respository ;)

Here it is an assembly video:

[![Assembly Shot][YT-screenshot]](https://www.youtube.com/watch?v=Gu0cR_CFLYs)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- USAGE EXAMPLES -->
## Usage

Instructions of use:

- Pressing "+" or "-" will increase/decrease the count.
- Long press "+" : Sound Event -> Activate/Deactivate buzzer sounds.
- Long press "-" : Reset event -> Reset the count.
- 60s without pressing any button: Deep Sleep Mode -> Display off.
- Any button pulsation will exit Deep Sleep Mode.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ROADMAP -->
## Roadmap

- [x] Count up/down and show it on screen
- [x] enable/disable sound when pressing buttons
- [x] Low Power Consumption
    - [x] Lower the frequency of the microcontroller at minimum
    - [x] Enter deep sleep mode automatically

See the [open issues](https://github.com/makingdevices/Bytes-Counter/issues) for a full list of proposed features (and known issues).

State: Project <b>FINISHED</b> - 01/08/2022

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- LICENSE -->
## License

Distributed under three licenses:
- [Hardware](/License/HW_cern_ohl_s_v2.pdf)
- [Software](/License/SW_GPLv3.0.txt)
- [Documentation](/License/Documentation_CC-BY-SA-4.0.txt)

[![GPL v3 License][license-shield]][license-url] 
<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

Making Devices - [@MakingDevices](https://www.instagram.com/makingdevices/)

Project Link: [https://github.com/makingdevices/Bytes-Counter](https://github.com/makingdevices/Bytes-Counter)

Other Links: [LinkTree](https://makingdevices.com/links/)


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- Sponsor -->
## Sponsor

[PCBWAY](https://www.pcbway.com/?from=makingdevices) helped us with the fabrication of the PCBs. You can check their quality with the following pictures:

[![PCB Shot 1][pcb_pic1]](https://www.pcbway.com/?from=makingdevices)
[![PCB Shot 2][pcb_pic2]](https://www.pcbway.com/?from=makingdevices)

Should you want to colaborate with MakingDevices, you can buy a [BytesCounter fully assembled and ready to use](https://www.pcbway.com/project/gifts_detail/Bytes_Counter_v1_0_4c88cb45.html) ;).


<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/makingdevices/Bytes-Counter.svg?style=for-the-badge
[contributors-url]: https://github.com/makingdevices/Bytes-Counter/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/makingdevices/Bytes-Counter.svg?style=for-the-badge
[forks-url]: https://github.com/makingdevices/Bytes-Counter/network/members
[stars-shield]: https://img.shields.io/github/stars/makingdevices/Bytes-Counter.svg?style=for-the-badge
[stars-url]: https://github.com/makingdevices/Bytes-Counter/stargazers
[issues-shield]: https://img.shields.io/github/issues/makingdevices/Bytes-Counter.svg?style=for-the-badge
[issues-url]: https://github.com/makingdevices/Bytes-Counter/issues
[license-shield]: /images/license.png
[license-url]: https://github.com/makingdevices/Bytes-Counter/tree/main/License
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/company/making-devices/
[sponsor-shield]: https://img.shields.io/badge/SPONSOR-PCBWAY-black.svg?style=for-the-badge&colorB=1200
[sponsor-url]: https://www.pcbway.com/?from=makingdevices
[sponsor-screenshot]: /images/PCB_sponsor.png
[product-screenshot]: images/screenshot.jpg
[pcb_pic1]: images/bytescounter_pcb_1.jpg
[pcb_pic2]: images/bytescounter_pcb_2.jpg
[PIC]: https://img.shields.io/badge/PIC18LF14K50-000000?style=for-the-badge
[PIC-url]: http://ww1.microchip.com/downloads/en/devicedoc/40001350f.pdf
[kicad-shield]: https://img.shields.io/badge/kicad-0b03fc?style=for-the-badge&logo=kicad&logoColor=white
[kicad-url]: https://www.kicad.org/
[YT-screenshot]: images/YT_assembly.PNG
[sponsor-icon]:  https://img.shields.io/badge/-PCBWAY-black.svg?style=for-the-badge&colorB=1200
[ig-shield]: https://img.shields.io/badge/instagram-a83297?style=for-the-badge&logo=instagram&logoColor=white
[ig-url]: https://www.instagram.com/makingdevices/
[MPLAB-C]: https://img.shields.io/badge/MPLAB%20C18-DD0031?style=for-the-badge&logo=C&logoColor=white
[MPLAB-C-url]: https://www.microchip.com/en-us/development-tool/SW006011
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 
