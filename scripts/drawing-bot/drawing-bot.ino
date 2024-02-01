// Include Servo.h libary
# include "Servo.h"

// Motor definition
Servo Motor_1;
Servo Motor_2;

// Save potentiometer values
int InputValue_1;
int InputValue_2;

// Servo position
int ServoPosition_1; 
int ServoPosition_2;

void setup()  
{
  // Attacg motors to pins 9 and 10
  Motor_1.attach(9); 
  Motor_2.attach(10);
}

void loop()  
{
  // Get potentiometer value
  int InputValue_1 = analogRead(A1);
  int InputValue_2 = analogRead(A2);

  // Convert potentiometer values (0-1023) to the servo motor position (0-180)   
  ServoPosition_1 = map(InputValue_1, 0, 1023, 0, 180);
  ServoPosition_2 = map(InputValue_2, 0, 1023, 0, 180);

  // Move the servo motor
  Motor_1.write(ServoPosition_1);
  Motor_2.write(ServoPosition_2);
}