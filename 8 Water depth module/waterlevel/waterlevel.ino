int LEDPin=8;
void setup() {
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(A0, INPUT); 
}

void loop() {
int value=analogRead(A0);
Serial.println(value);
double data=(value/650)*4;//水位计算方式需要根据实际模块的模拟输出值导出计算方式
Serial.print("the depth is:");
Serial.print(data);
Serial.println("cm");
if(value>620)//这个值可自由设置
{
digitalWrite(LEDPin,HIGH);
}
else
{
digitalWrite(LEDPin,LOW);
}
delay(100);
}
