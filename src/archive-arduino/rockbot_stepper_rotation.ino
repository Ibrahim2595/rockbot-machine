int RAIL_POS;

const int stepPin = 9;
const int dirPin = 8; 
const int M1 = 14;
const int M0 = 15;
const int EN = 5;

int LEDPIN = 3;

void setup()
{  
  digitalWrite(EN,HIGH);
  pinMode(EN,OUTPUT);
  pinMode(LEDPIN, OUTPUT);
  pinMode(M0, OUTPUT);
  digitalWrite(M0, HIGH);
  pinMode(M1, OUTPUT);
  digitalWrite(M1, HIGH);
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);

  // PICK UP 1
  delay(2000);
  STEPPER_MOVE(1, 6900);
  delay(15000);
  STEPPER_MOVE(-1, 10900);
  delay(14000);
  STEPPER_MOVE(1, 4000);
  delay(1000);


  // PICK UP 2
  STEPPER_MOVE(1, 6900);
  delay(14000);
  STEPPER_MOVE(-1, 10900);
  delay(14000);
  STEPPER_MOVE(1, 4000);
  delay(1000);


  // PICK UP 3
  STEPPER_MOVE(1, 6900);
  delay(14000);
  STEPPER_MOVE(-1, 10900);
  delay(14000);
  STEPPER_MOVE(1, 4000);
  delay(1000);


  // PICK UP 4
  STEPPER_MOVE(1, 6900);
  delay(14000);
  STEPPER_MOVE(-1, 10900);
  delay(14000);
  STEPPER_MOVE(1, 4000);
  delay(1000);





  
}

void loop()
{
  digitalWrite(LEDPIN, HIGH);
  delay(200);
  digitalWrite(LEDPIN, LOW);
  delay(200);

  
}


void STEPPER_MOVE(int STEP_DIR, int STEP_DIST){
  if (STEP_DIR == -1){
    digitalWrite(dirPin, LOW);
  }

  else{
    digitalWrite(dirPin, HIGH);
  }
  for (int i = 0; i < STEP_DIST; i++){
    digitalWrite(stepPin, HIGH);
    delay(1);
    digitalWrite(stepPin, LOW);
    delay(1);
  }
  
}
