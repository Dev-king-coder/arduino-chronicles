#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //RED
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(7000);
  //YELLOW
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(4000);
  //GREEN
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(4000);
  digitalWrite(8, LOW);
  delay(700);
  digitalWrite(8,HIGH);
  delay(700);
  digitalWrite(8, LOW);
  delay(700);
  digitalWrite(8,HIGH);
  //REPEAT
  delay(1000);



}