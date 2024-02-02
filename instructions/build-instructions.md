# Build instructions

Before you start with the project make sure that you have all the parts available.
- 1x Arduino Uno
- 2x 10kΩ potentiometers
- 2x SG90 micro servo motors
- Jumper wires
- Breadboard
- 1x M3x5 threaded insert
- M3 screw
- 4x small screws (usually part of the servo kit)

<img src="../pics/0_all-parts.jpg" width="80%">


## Step 1
Print all parts provided in the folder [3d files](https://github.com/FckDisImAPanda/arduino-drawing-bot/tree/abad743cae6b6b02dc74ad093d1450224094405e/3d%20files).
<img src="../pics/1_printed-parts.jpg" width="80%">

_If you use other servos than SG90 please check if the parts will fit!_


## Step 2
Connect the potentiometers and servos according the wiring diaramm.
<img src="../pics/2_wiring-diagram.png" width="80%">

<table width="100%">
    <tr align="center">
        <td>Servo 1</td>
        <td>Servo 2</td>
        <td>Potentiometer 1</td>
        <td>Potentiometer 2</td>
    </tr>
    <tr>
        <td>
            <ul>
                <li>GND</li>
                <li>5V</li>
                <li>PIN D9</li>
            </ul>
        </td>
        <td>
            <ul>
                <li>GND</li>
                <li>5V</li>
                <li>PIN D10</li>
            </ul>
        <td>
            <ul>
                <li>5V</li>
                <li>PIN A1</li>
                <li>GND</li>
            </ul>
        </td>
        <td>
            <ul>
                <li>5V</li>
                <li>PIN A2</li>
                <li>GND</li>
            </ul>
        </td>
        </td>
    </tr>
</table>

<img src="../pics/2_wired.jpg" width="80%">


## Step 3
Upload the code and test the hardware. When the potentiometer is turned, the associated servomotor should rotate.

In case of errors check the wiring and the connections again.

## Step 4
Screw the 3d printed parts to the servo control horns.
<table>
    <tr>
        <td><img src="../pics/4_servo-horn-front.jpg"></td>
        <td><img src="../pics/4_servo-horn-back.jpg"></td>
    </tr>
</table>

## Step 5
Insert the M4 threaded insert into the arm with the pen holder. Carefully heat the insert and push it into place. 
<img src="../pics/5_insert.jpg" width="80%">

## Step 6
Screw the servo motors into the intended positions.

Stand:<br>
<img src="../pics/6_servo-stand.jpg" width="80%">

Arm:<br>
<img src="../pics/6_servo-arm.jpg" width="80%">

## Step 7
Turn both potentiometers as far counterclockwise as possible. Then put the servos together as shown in the picture.<br>
<img src="../pics/7_combine-servos.jpg" width="80%">

## Step 8
Insert the bold and a pen.<br>
<img src="../pics/8_complete.jpg" width="80%">

## Step 9
Start drawing your beautiful pictures.
