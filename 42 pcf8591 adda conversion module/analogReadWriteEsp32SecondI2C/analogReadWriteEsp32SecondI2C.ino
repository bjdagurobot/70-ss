
#include "Arduino.h"

#include "PCF8591.h"
#define PCF8591_I2C_ADDRESS 0x4f

// Set i2c address
 PCF8591 pcf8591(&I2Ctwo, 0x4f, 21, 22);

void setup()
{
	Serial.begin(115200);
	pcf8591.begin();
}

void loop()
{

	int ana = pcf8591.analogRead(AIN2);
	Serial.print("AIN2 --> ");
	Serial.println(ana);
pcf8591.analogWrite(ana);

	delay(50);

}
