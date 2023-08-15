#define LEDPin   2                         //外接led引脚
#define touchPin   13                         //外接触摸引脚

void setup() {
  pinMode(LEDPin, OUTPUT);//led是输出
  pinMode(touchPin, INPUT);//触摸是输入

}
 
void loop() {
  if(digitalRead(touchPin)){
     digitalWrite(LEDPin, HIGH); 
  }
  else{
    digitalWrite(LEDPin, LOW); 
  }
}
 
