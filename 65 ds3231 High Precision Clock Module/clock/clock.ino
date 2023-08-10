// DS3231_Serial_Easy
#include <DS3231.h>
DS3231  rtc(SDA, SCL);

void setup()
{
  Serial.begin(115200);
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
//  rtc.setDOW(MONDAY);     // Set Day-of-Week to SUNDAY
//  rtc.setTime(13, 18, 40);     // Set the time to 12:00:00 (24hr format)
//  rtc.setDate(18, 11, 2019);   // Set the date to January 1st, 2014
}

void loop()
{
  // Send Day-of-Week
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  
  // Send date
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");

  // Send time
  Serial.println(rtc.getTimeStr());
  delay (1000);
}
