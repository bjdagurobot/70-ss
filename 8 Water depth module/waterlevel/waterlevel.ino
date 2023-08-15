int LEDPin=2;
const int potpin = A5;//33

void setup() {
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
analogReadResolution(12);//0-4095
}

void loop() {
int value=analogRead(potpin);
Serial.println(value);
if(value>2100)//这个值可自由设置
{
digitalWrite(LEDPin,HIGH);
}
else
{
digitalWrite(LEDPin,LOW);
}
delay(100);
}
