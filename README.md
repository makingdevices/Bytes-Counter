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
[![PCBWAY][sponsor-shield]][sponsor-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![GPL v3 License][license-shield]][license-url]
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
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
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

* [![Next][Next.js]][Next-url]
* [![React][React.js]][React-url]
* [![Vue][Vue.js]][Vue-url]
* [![Angular][Angular.io]][Angular-url]
* [![Svelte][Svelte.dev]][Svelte-url]
* [![Laravel][Laravel.com]][Laravel-url]
* [![Bootstrap][Bootstrap.com]][Bootstrap-url]
* [![JQuery][JQuery.com]][JQuery-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Build one

1. Get the gerber files for the latest version: [V1](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/Gerber/BytesCounterV1.zip) 
2. Send them to a PCB manufacturer ([Our Sponsor is PCBWAY]([sponsor-url]) )
3. Buy all the components from the [Bill Of Materials](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/BytesCounter_BOM.xlsx)
4. Solder everything
5. Burn the [latest firmware](https://github.com/makingdevices/Bytes-Counter/blob/main/v1/Simulation/Bytes_Counter.hex)

[Assembly video](https://www.youtube.com/watch?v=Gu0cR_CFLYs)

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

Distributed under the GPLv3 License. See `LICENSE.txt` for more information.
<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTACT -->
## Contact

Making Devices - [@MakingDevices](https://www.instagram.com/makingdevices/)

Project Link: [https://github.com/makingdevices/Bytes-Counter](https://github.com/makingdevices/Bytes-Counter)

Other Links: [LinkTree](https://makingdevices.com/links/)


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- Sponsor -->
## Sponsor

PCBWay is the most professional PCB manufacturer for prototyping and low-volume production to work with in the world. With more than a decade in the field, They are committed to meeting the needs of their customers from different industries in terms of quality, delivery, cost-effectiveness and any other demanding requests. As Sponsor of Making Devices, they will be in charge of all the PCBs for MDV, allowing both of us to grow together in a long term partnership. We hope you take them into account for your both personal and professional prototypes or products.

[![Sponsor Shot][sponsor-screenshot]](sponsor-url)

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
[license-shield]: /images/license.svg
[license-url]: https://github.com/makingdevices/Bytes-Counter/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/company/making-devices/
[sponsor-shield]: https://img.shields.io/badge/SPONSOR-PCBWAY-black.svg?style=for-the-badge&colorB=1200
[sponsor-url]: https://www.pcbway.com/?from=makingdevices
[sponsor-screenshot]: /images/PCB_sponsor.png
[product-screenshot]: images/screenshot.jpg
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 
