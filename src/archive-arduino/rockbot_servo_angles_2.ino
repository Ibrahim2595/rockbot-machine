#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo gripperServo;

int pos1;  
int pos2;
int gripOp;
int gripCl;

int pos3 = 25;

void setup() {
    servo1.attach(1);
    servo2.attach(3);
    servo3.attach(5);
    gripperServo.attach(9);

//    servo1.writeMicroseconds(544);
//    servo2.writeMicroseconds(544);
//    servo3.writeMicroseconds(544);

//    int angle = 25;
//    pos1 = map(angle, 0, 270, 0, 180);
//    servo1.write(pos1);
//    servo2.write(pos1);
//    servo3.write(pos1);
//    gripperServo.write(pos1);
//    
//    delay(200);
}

void loop() {

  int angle1 = 35;
  pos1 = map(angle1, 0, 270, 0, 180);
  servo1.write(pos1);
  servo2.write(pos1);
  servo3.write(pos1);

  int gripperOpen = 20;
  gripOp = map(gripperOpen, 0, 270, 0, 180);
  gripperServo.write(gripOp);
  
  delay(200);
  

  int angle2 = 70;
  pos2 = map(angle2, 0, 270, 0, 180);
  servo1.write(pos2);
  servo2.write(pos2);
  servo3.write(pos2);

  delay(200);

  int gripperClosed = 80;
  gripCl = map(gripperClosed, 0, 270, 0, 180);
  gripperServo.write(gripCl);

  delay(200);

             
}
