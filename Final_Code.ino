//Program to 

#include <Servo.h>  // header file for servo library functions

#define flex_sensor_ip_1 A0 // flex sensor pin as A0 to observe movement for index finger
#define flex_sensor_ip_2 A1 // flex sensor pin as A1 to observe movement for middle finger
#define flex_sensor_ip_3 A2 // flex sensor pin as A2 to observe movement for Ring finger
#define flex_sensor_ip_4 A3 // flex sensor pin as A3 to observe movement for small finger
#define flex_sensor_ip_5 A4 // flex sensor pin as A0 to observe movement for Thumb

#define servo_motor_signal_1 3 // servo motor PWM ip signal as pin 3 to mimic movements of index finger.
#define servo_motor_signal_2 5 // servo motor PWM ip signal as pin 5 to mimic movements of middle finger.
#define servo_motor_signal_3 6 // servo motor PWM ip signal as pin 6 to mimic movements of Ring finger.
#define servo_motor_signal_4 9 // servo motor PWM ip signal as pin 9 to mimic movements of small finger.
#define servo_motor_signal_5 10 // servo motor PWM ip signal as pin 10 to mimic movements of Thumb.

Servo servo_motor_1;// create instance of servo class
Servo servo_motor_2;
Servo servo_motor_3;
Servo servo_motor_4;
Servo servo_motor_5;

int servo_angle_1, actual_motor_angle_1;
int servo_angle_2, actual_motor_angle_2;
int servo_angle_3, actual_motor_angle_3;
int servo_angle_4, actual_motor_angle_4;
int servo_angle_5, actual_motor_angle_5;


void setup()

  {
servo_motor_1.attach(servo_motor_signal_1); // attach servo motor
servo_motor_2.attach(servo_motor_signal_2); // attach servo motor
servo_motor_3.attach(servo_motor_signal_3); // attach servo motor
servo_motor_4.attach(servo_motor_signal_4); // attach servo motor
servo_motor_5.attach(servo_motor_signal_5); // attach servo motor 

Serial.begin(9600); // initialize serial communication

servo_motor_1.write(90);// set motor angle to 90 deg
servo_motor_2.write(90);
servo_motor_3.write(90);
servo_motor_4.write(90);
servo_motor_5.write(90);
  }

void loop()
  {

int flex_sensor_value_1 = analogRead(flex_sensor_ip_1);// read flex sensor
int flex_sensor_value_2 = analogRead(flex_sensor_ip_2);
int flex_sensor_value_3 = analogRead(flex_sensor_ip_3);
int flex_sensor_value_4 = analogRead(flex_sensor_ip_4);
int flex_sensor_value_5 = analogRead(flex_sensor_ip_5);

// map its values in to servo motor angle values

servo_angle_1 = map(servo_angle_1,820,960,0,180);
servo_angle_2 = map(servo_angle_2,820,960,0,180);
servo_angle_3 = map(servo_angle_3,820,960,0,180);
servo_angle_4 = map(servo_angle_4,820,960,0,180);
servo_angle_5 = map(servo_angle_5,820,960,0,180);


servo_motor_1.write(servo_angle_1);// rotate servo motor 
servo_motor_2.write(servo_angle_2);
servo_motor_3.write(servo_angle_3);
servo_motor_4.write(servo_angle_4);
servo_motor_5.write(servo_angle_5);

actual_motor_angle_1 = servo_motor_1.read();// read motor angle
actual_motor_angle_2 = servo_motor_2.read();
actual_motor_angle_3 = servo_motor_3.read();
actual_motor_angle_4 = servo_motor_4.read();
actual_motor_angle_5 = servo_motor_5.read();

//Index Finger
Serial.print("flex sensor bending value of index finger  = ");
Serial.println(flex_sensor_value_1); // display sensor value 
Serial.print("motor angle = ");
Serial.print(actual_motor_angle_1); // and motor angle
Serial.println(" deg");

//Middle Finger
Serial.print("flex sensor bending value of middle finger = ");
Serial.println(flex_sensor_value_2); // display sensor value 
Serial.print("motor angle = ");
Serial.print(actual_motor_angle_2); // and motor angle
Serial.println(" deg");

//Ring Finger
Serial.print("flex sensor bending value of ring finger = ");
Serial.println(flex_sensor_value_3); // display sensor value 
Serial.print("motor angle = ");
Serial.print(actual_motor_angle_3); // and motor angle
Serial.println(" deg");

//Small Finger
Serial.print("flex sensor bending value small finger = ");
Serial.println(flex_sensor_value_4); // display sensor value 
Serial.print("motor angle = ");
Serial.print(actual_motor_angle_4); // and motor angle
Serial.println(" deg");

// Thumb
Serial.print("flex sensor bending value of Thumb = ");
Serial.println(flex_sensor_value_5); // display sensor value 
Serial.print("motor angle = ");
Serial.print(actual_motor_angle_5); // and motor angle
Serial.println(" deg");

delay(1000);

  }
