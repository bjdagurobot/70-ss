#define LEDPin   2                         //外接led引脚
#define UPin   13                         //外接U型光电引脚

void setup() {
  pinMode(LEDPin, OUTPUT);//led是输出
  pinMode(UPin, INPUT);//U型光电是输入

}
 
void loop() {
  if(digitalRead(UPin)){
     digitalWrite(LEDPin, HIGH); 
  }
  else{
    digitalWrite(LEDPin, LOW); 
  }
}
 
