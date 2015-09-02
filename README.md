## qt-flight-information-demo
#Qt5 demo application for simulating a Flight Information Display at an airport

<a href="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZzNmZ1VQOFJQOGc"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQIZzNmZ1VQOFJQOGc"/></a>

## Overview

Qt5 introduced a new feature which is the possibility to display multiple Qt applications in different screens. That feature is very useful in various types of application. With this project we are giving an example of a Flight Information Display System(FIDS) in an ariport. The Flight Information Demo is intended to work together with the Ckeck-In Kiosk Demo found here: https://github.com/giobauermeister/qt-checkin-kiosk-demo

## Steps to run the demo

The image with included demos can be built using the recipes found at: https://github.com/giobauermeister/meta-projects/tree/master/recipes-qt or the applications can be cross-compiled using Qt Creator and the source codes available.

The qt-checkin-kiosk-demo repository includes a systemd UNIT file for starting the launching script at startup as well as the script which launches both applications. 

To launch the applications manually, use enviroment variable with the desired framebuffer(eg. /dev/fb2):

    export QT_QPA_EGLFS_FB=/dev/fb2
    
and launch the application with the desired plugin(eg. EGLFS):

    flighInfo -platform eglfs

Bellow is a video demostration of the application

<a href="https://youtu.be/b6nqHyKfjVQ"><img src="https://drive.google.com/uc?export=view&id=0B7uO0jJfbFQITUZKaFduYXlMNTA"/></a>
