void forward(){
  motor.run(FORWARD);
  motor.setSpeed(200);
  delay(200);
  motor2.run(FORWARD);
  motor2.setSpeed(200);
  delay(200);
}

void backward(){
  motor.run(BACKWARD);
  motor.setSpeed(200);
  delay(200);
  motor2.run(BACKWARD);
  motor2.setSpeed(200);
  delay(200);
}
 
 void left(){
   motor.run(FORWARD);
  motor.setSpeed(200);
  delay(200);
  motor2.run(RELEASE);
  motor2.setSpeed(200);
  delay(200);

 }

 void right(){
 motor.run(RELEASE);
  motor.setSpeed(200);
  delay(200);
  motor2.run(FORWARD);
  motor2.setSpeed(200);
  delay(200);
 }