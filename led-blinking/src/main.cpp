#include <Arduino.h>
#define onboard 13
// put function declarations here:

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(14);
  digitalWrite(LED_BUILTIN,LOW);
  delay(14);
}
