#include"t.h"
int k=0;

void setup(){
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}
void loop(){
    Serial.println(k);
    //delay(1000);
    blink(400,13);
    k++;
}