#include <Arduino.h>

// variables
#define PIN_RED 12
#define PIN_YELLOW 10
#define PIN_GREEN 8
#define DELAY_GO 4000
#define DELAY_BLINK 700

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //RED
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_GREEN, LOW);
  delay(7000);
  //YELLOW
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_YELLOW, HIGH);
  digitalWrite(PIN_GREEN, LOW);
  delay(4000);
  //GREEN
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_GREEN, HIGH);
  delay(DELAY_GO);
  digitalWrite(PIN_GREEN, LOW);
  delay(DELAY_BLINK);
  digitalWrite(PIN_GREEN,HIGH);
  delay(DELAY_BLINK);
  digitalWrite(PIN_GREEN, LOW);
  delay(DELAY_BLINK);
  digitalWrite(PIN_GREEN,HIGH);
  //REPEAT
  delay(1000);
}