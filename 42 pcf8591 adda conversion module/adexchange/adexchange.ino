#include <Wire.h>
void setup()
{
  Wire.begin();                // join i2c bus (address optional for master)
  Serial.begin(9600);          // start serial communication at 9600bps
  float reading = 0,date=0;
}

void loop(){
  Wire.requestFrom(0x4F,8);
  Wire.beginTransmission(0x4F); 
  Wire.write(byte(0x02));//0x00==1;0x01==1;0x02==2;0x03==3
  Wire.endTransmission(); 
  while( Wire.available())
  {
   int reading =Wire.read();
  int date=(reading*5)/256;
  Serial.print(reading);
    Serial.print("    ");
  Serial.print(date); 
  Serial.println("v"); 
  }
}
