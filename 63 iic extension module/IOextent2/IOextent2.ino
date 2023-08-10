#include <Wire.h>
#include "PCF8574.h"

PCF8574 expander;

void setup() {
  // put your setup code here, to run once:
  expander.begin(0x20);//设备地址
  expander.pinMode(1,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  expander.digitalWrite(1,HIGH);
  delay(1000);
  expander.digitalWrite(1,LOW);
  delay(1000);
}
