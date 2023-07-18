#include <Arduino.h>

int PIN_SOS_LED =12;
int DELAY_DOT = 200;
int DELAY_DASH = 800;
int DELAY_BETWEEN = 400; 
void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_SOS_LED, OUTPUT);
}

void dash(){
  digitalWrite(PIN_SOS_LED, HIGH);
  delay(DELAY_DASH);
  digitalWrite(PIN_SOS_LED, LOW);
  delay(DELAY_BETWEEN);
}

void dot(){
  digitalWrite(PIN_SOS_LED, HIGH);
  delay(DELAY_DOT);
  digitalWrite(PIN_SOS_LED, LOW);
  delay(DELAY_BETWEEN);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<3; i++){
    dot();
  }
  for(int i=0; i<3; i++){
    dash();
  }
  for(int i=0; i<3; i++){
    dot();
  }
  delay(1000);
}