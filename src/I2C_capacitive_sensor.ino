#include <Wire.h>

unsigned long int time = 0;

//B3
int pinB3a = 4;
int pinB3b = 3;


void setup() {
  Wire.begin();
  Serial.begin(0);
  //B3
  pinMode(pinB3a, OUTPUT);
  pinMode(pinB3b, INPUT);
}

void loop() {
  time = micros();
  //B3 //6
  for (int count = 0; count < 1000; count++) {
    
    digitalWrite(pinB3a, HIGH);
    while (!digitalRead(pinB3b)) {
    }

    digitalWrite(pinB3a, LOW);

    while ((digitalRead(pinB3b))) {
    }
  }

  if (((micros() - time) > 24000)) {
    Wire.beginTransmission(1);
    Wire.write(3);
    Wire.endTransmission();
    Serial.print(micros() - time);
    Serial.print(',');
    Serial.println("press!");
    delay(1000);
  }
  else {
    Serial.print(micros() - time);
    Serial.print(',');
    Serial.println("----");
  }
}
