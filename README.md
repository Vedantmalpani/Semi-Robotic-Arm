# Semi-Robotic-Arm
In this project, a robotic arm is designed in such a manner that it mimics the movements of the human fingers. When power supply is given to Arduino UNO, it sends signals received from the flex sensor to servo motors and further the movement of these motors will move the hands of robotic arm. An Arduino UNO combined with servo SG90 controls the action of the prototype. The flex sensor provides variable resistance as analog input signal for the Arduino UNO to convert it to digital form and convey it to the servo motor. 
The purpose of this project is to design a prosthetic hand with inexpensive materials that can be developed to an intelligent prosthetic hand, and can be easily used and controlled. Servo motors have 3 Wires one is grounded, one gives the output and third one is pinned to VCC(5v). All the grounds of Servo motor are set to common node, all the VCC of servo motor are set to common node and all the signal wire are connected into digital PWM of Arduino. One end of flex sensor is connected to GND while the other end is connected to Analog Input A0 of Arduino. A 10KΩ resistor is connected between A0 and VCC. This connection means that the flex sensor and the 10KΩ resistor act as a voltage divider. Five Servo motors are connected with five fingers, when these servo motor rotates, fingers related to that will move accordingly. Hence, we can say that we observed motion of fingers with Microcontroller and Serco motors with the help of flex motors. 
 
 
 
 For detailed explaination visit
 
 https://github.com/malpanivedant/Semi-Robotic-Arm/blob/master/RoboArm.pdf
