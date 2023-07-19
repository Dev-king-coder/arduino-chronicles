#include <Arduino.h>

int LED_BIT_1 = 6;
int LED_BIT_2 = 8;
int LED_BIT_3 = 10;
int LED_BIT_4 = 12;
int DELAY_CYCLE = 1000;
int memory_array[16][4]={{0,0,0,0},{0,0,0,1},{0,0,1,0},{0,0,1,1},{0,1,0,0},{0,1,0,1},{0,1,1,0},{0,1,1,1},{1,0,0,0},{1,0,0,1},{1,0,1,0},{1,0,1,1},{1,1,0,0},{1,1,0,1},{1,1,1,0},{1,1,1,1}};


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BIT_1, OUTPUT);
  pinMode(LED_BIT_2, OUTPUT);
  pinMode(LED_BIT_3, OUTPUT);
  pinMode(LED_BIT_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<16;i++){
    digitalWrite(LED_BIT_1, memory_array[i][0]);
    digitalWrite(LED_BIT_2, memory_array[i][1]);
    digitalWrite(LED_BIT_3, memory_array[i][2]);
    digitalWrite(LED_BIT_4, memory_array[i][3]);
    delay(DELAY_CYCLE);
  }
}