## Abstract

In this project, a 7 segment display is interfaced with Arduino Uno to display numbers from 0-9.

## Hardware Components

 - Arduino Uno
 - Seven segment Display(Common Cathode)

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection:

- D7-D13 of Arduino Uno pins are connected to 7 segment display

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135745830-dd008b1d-a53e-4e0f-aad0-867c380a981a.PNG width="800" height="400">

- Download code. ino and open in the Arduino tool.
- Go to tools ->select Board->select Arduino UNO.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
  https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in       Program file->Click OK.

<img src=https://user-images.githubusercontent.com/84024571/132992989-2161269d-0baf-4f56-9f3c-890b1d71bbe5.PNG width="800" height="400">

- Click on the Run button.

## Output:

<img src=https://user-images.githubusercontent.com/84024571/135745892-e10391ec-1689-40b0-9654-f49beec8f5fb.PNG width="800" height="400">
