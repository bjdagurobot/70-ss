#include <SFE_BMP180.h>

SFE_BMP180 AirPresure;
char presureDelayTime;
double presureP, presureT;

void setup() {
  Serial.begin(9600);
  AirPresure.begin();
}

void loop()
{
  presureDelayTime = AirPresure.startPressure(3);
  if (presureDelayTime != 0)
  {
    delay(presureDelayTime);
    presureDelayTime = AirPresure.getPressure(presureP, presureT);
    if (presureDelayTime != 0)
    {
      //当前气压
      Serial.print("Current Preasure: ");
      Serial.print(presureP);
      Serial.println(" bar");

      //换算成标准大气压
      Serial.print(presureP);
      Serial.print(" bar is");
      Serial.print(presureP / 1000.0);
      Serial.println(" atm");
    }
    else
    {
      Serial.println("ERROR");
    }
  }
  else
  {
    Serial.println("ERROR");
  }
  delay(1000);
}
