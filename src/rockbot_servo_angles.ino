#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo gripperServo;

int pos1;  
int pos2;
int gripOp;
int gripCl;

//int angle1, angle2, angle3;

int pos3;

void setup() {
    servo1.attach(1);
    servo2.attach(3);
    servo3.attach(5);
    gripperServo.attach(9);

    delay(14000);



    
  // PICK UP 1
    delay(2000);
    delta_sweep(108, 108, 108);
    delay(4000);
    
    delta_sweep(29, 79, 31);
    delay(2000);
    
    int gripperClosed = 120;
    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);
    
    delta_sweep(8, 50, 7);
    delay(2000);

    int gripperOpen = 48;
    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(29, 79, 31);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(25000);




    // DROP OFF 1
    delta_sweep(78, 31, 31);
    delay(2000);

    delta_sweep(48, 8, 8);
    delay(2000);

    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);

    delta_sweep(78, 31, 31);
    delay(2000);

    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(26000);





    // PICK UP 2   
    delta_sweep(29, 79, 31);
    delay(2000);
    
    
    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);
    
    delta_sweep(8, 50, 7);
    delay(2000);

    
    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(29, 79, 31);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(25000);





    // DROP OFF 2
    delta_sweep(94, 51, 51);
    delay(2000);

    delta_sweep(70, 29, 29);
    delay(2000);

    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);

    delta_sweep(94, 51, 51);
    delay(2000);

    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(26000);






    // PICK UP 3
    delta_sweep(80, 32, 33);
    delay(2000);
    
    
    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);
    
    delta_sweep(51, 1, 1);
    delay(2000);

    
    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(80, 32, 33);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(25000);





    // DROP OFF 3
    delta_sweep(109, 62, 62);
    delay(2000);

    delta_sweep(84, 42, 42);
    delay(2000);

    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);

    delta_sweep(109, 62, 62);
    delay(2000);

    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(26000);






    // PICK UP 4
    delta_sweep(80, 32, 33);
    delay(2000);
    
    
    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);
    
    delta_sweep(51, 1, 1);
    delay(2000);

    
    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(80, 32, 33);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(25000);




    
    // DROP OFF 4
    delta_sweep(125, 71, 71);
    delay(2000);

    delta_sweep(99, 52, 52);
    delay(2000);

    gripCl = map(gripperClosed, 0, 270, 0, 180);
    gripperServo.write(gripCl);
    delay(2000);

    delta_sweep(125, 71, 71);
    delay(2000);

    gripOp = map(gripperOpen, 0, 270, 0, 180);
    gripperServo.write(gripOp);
    delay(2000);

    delta_sweep(108, 108, 108);
    delay(3000);


    
}

void loop() {

//  int angle1 = 35;
//  pos1 = map(angle1, 0, 270, 0, 180);
//  servo1.write(pos1);
//  servo2.write(pos1);
//  servo3.write(pos1);
//
//  int gripperOpen = 20;
//  gripOp = map(gripperOpen, 0, 270, 0, 180);
//  gripperServo.write(gripOp);
//  
//  delay(200);
//  
//
//  int angle2 = 70;
//  pos2 = map(angle2, 0, 270, 0, 180);
//  servo1.write(pos2);
//  servo2.write(pos2);
//  servo3.write(pos2);
//
//  delay(200);
//
//  int gripperClosed = 80;
//  gripCl = map(gripperClosed, 0, 270, 0, 180);
//  gripperServo.write(gripCl);
//
//  delay(200);

}


void delta_pos( int angle1,int angle2, int angle3){
    pos1 = map(angle1, 0, 270, 0, 180);
    pos2 = map(angle2, 0, 270, 0, 180);
    pos3 = map(angle3, 0, 270, 0, 180);
    servo1.write(pos1);
    servo2.write(pos2);
    servo3.write(pos3);
}


void delta_sweep (int angle1, int angle2, int angle3){

    pos1 = map(angle1, 0, 270, 0, 180);
    pos2 = map(angle2, 0, 270, 0, 180);
    pos3 = map(angle3, 0, 270, 0, 180);

    for (int i = pos1; i <= pos1; i++){
      servo1.write(pos1);      
    }

    for (int i = pos2; i <= pos2; i++){
      servo2.write(pos2);
    }

    for (int i = pos3; i <= pos3; i++){
      servo3.write(pos3);
    }
  
}
