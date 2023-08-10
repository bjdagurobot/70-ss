void setup()
{
  pinMode(13,OUTPUT);
pinMode(8,INPUT);
Serial.begin(9600);
}
void loop()
{
  int state=digitalRead(8);
  Serial.println(state);
if(state)
    digitalWrite(13,HIGH);//点亮led灯
else//否则
    digitalWrite(13,LOW);//熄灭led灯
}
