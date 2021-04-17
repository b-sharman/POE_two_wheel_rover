#pragma config(Sensor, in1,    rightLineFollower, sensorLineFollower)
#pragma config(Sensor, in2,    middleLineFollower, sensorLineFollower)
#pragma config(Sensor, in3,    leftLineFollower, sensorLineFollower)
#pragma config(Sensor, in4,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl2,  sonarIn,        sensorSONAR_raw)
#pragma config(Sensor, dgtl5,  pushButton,     sensorTouch)
#pragma config(Sensor, dgtl6,  redLED,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  yellowLED,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  greenLED,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  encoderRight,   sensorQuadEncoder)
#pragma config(Sensor, dgtl11, encoderLeft,    sensorQuadEncoder)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title: Activity 3.1.1 Inputs and Outputs
  Team Members: Byron Sharman
  Date: 3/31/2021
  Section:


  Task Description:
  Use an If Else statement to write a program so that the green Led will turn on and
  stay on when the button is pressed and turn off when the button is not pressed. Then
  at the same time if the potentiometer is less than 2500 the yellow LED will be on and
  if the potentiometer is greater than or equal to 2500 the red LED will be on. This
  program should run infinitely.



  Pseudocode:
  event-checking loop
    if the button is pressed
      turn on the green LED
    otherwise
      turn off the green LED
    if the potentiometer is less than 2500
      turn the yellow LED on
    otherwise
      turn the yellow LED off
    wait however long


*/

task main()
{                                     //Program begins, insert code within curly braces

    while (true) {
        if (SensorValue[pushButton] == 1) {
            turnLEDOn(greenLED);
        }
        else {
            turnLEDOff(greenLED);
        }
        if (SensorValue[potentiometer] <= 2500) {
            turnLEDOn(yellowLED);
        }
        else {
            turnLEDOff(yellowLED);
        }
        waitInMilliseconds(50); //the procedure runs 1000/50=20 times per second
    }

}
