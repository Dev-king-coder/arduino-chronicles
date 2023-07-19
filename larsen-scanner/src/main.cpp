#include <Arduino.h>

int LED_1 = 6;
int LED_2 = 8;
int LED_3 = 10;
int LED_4 = 12;
int LED_ARRAY[4]={LED_1,LED_2,LED_3,LED_4};
int DELAY_CYCLE = 50;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for(int i=0;i<3;i++){
    digitalWrite(LED_ARRAY[i], LOW);
    delay(50);
    digitalWrite(LED_ARRAY[i+1], LOW);
    delay(50);
    digitalWrite(LED_ARRAY[i], HIGH);
    delay(50);
  }
  for(int i=4;i>1;i--){
    digitalWrite(LED_ARRAY[i], LOW);
    delay(50);
    digitalWrite(LED_ARRAY[i-1], LOW);
    delay(50);
    digitalWrite(LED_ARRAY[i], HIGH);
    delay(50);
  }
}