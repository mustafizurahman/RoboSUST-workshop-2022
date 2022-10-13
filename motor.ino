
#include <AFMotor.h>

AF_DCMotor motor(4), motor2(2);
void setup() {
  //motor shamne jabe
  // motor.run(FORWARD);
  // //EKTA MOTOR PISONE
  // motor.run(BACKWARD);
  // // delay(1000);
  // // EKTA MOTOR OFF HBE
  // // motor.run(RELEASE);
  // motor.setSpeed(125);

  //   //motor shamne jabe
  // // motor2.run(FORWARD);
  // //EKTA MOTOR PISONE
  // motor2.run(BACKWARD);
  // delay(6000);
  // // EKTA MOTOR OFF HBE
  // // motor2.run(RELEASE);
  // motor2.setSpeed(255);
   forward();
   delay(3000);
   backward();
   left();
   right();

}

void loop() {
  // put your main code here, to run repeatedly:

}