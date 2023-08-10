#include <Wire.h>
#include "PCF8574.h"

PCF8574 expander;

void setup() {
  // put your setup code here, to run once:
  expander.begin(0x3f);
  expander.pinMode(1,OUTPUT);
  expander.pinMode(2,INPUT);
  expander.digitalWrite(2,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(!expander.digitalRead(2))
   {
    expander.digitalWrite(1,HIGH);   
   }
   else{
    expander.digitalWrite(1,LOW);
   }
   Serial.println(expander.digitalRead(2));
}
