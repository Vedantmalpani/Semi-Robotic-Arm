//Program to 

#include <Servo.h>  // header file for servo library functions

#define flex_sensor_ip A0 // flex sensor pin as A0

#define servo_motor_signal 3 // servo motor PWM ip signal as pin 3

Servo servo_motor; // create instance of servo class

int servo_angle,actual_motor_angle;


void setup()

  {

servo_motor.attach(servo_motor_signal); // attach servo motor 

Serial.begin(9600); // initialize serial communication

servo_motor.write(90); // set motor angle to 90 deg

  }


void loop()

  {

int flex_sensor_value = analogRead(flex_sensor_ip);// read flex sensor

// map its values in to servo motor angle values

servo_angle = map(servo_angle,820,960,0,180);


servo_motor.write(servo_angle); // rotate servo motor 

actual_motor_angle = servo_motor.read(); // read motor angle

Serial.print("flex sensor bending value  = ");

Serial.println(flex_sensor_value); // display sensor value 

Serial.print("motor angle = ");

Serial.print(actual_motor_angle); // and motor angle

Serial.println(" deg");

delay(1000);

  }
