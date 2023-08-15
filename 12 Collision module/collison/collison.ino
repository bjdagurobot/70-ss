#define LEDPin   2                         //外接led引脚
#define ButtonPin   13                         //外接碰撞引脚

void setup() {
  pinMode(LEDPin, OUTPUT);//led是输出
  pinMode(ButtonPin, INPUT);//碰撞是输入

}
 
void loop() {
  if(digitalRead(ButtonPin)){
     digitalWrite(LEDPin, HIGH); 
  }
  else{
    digitalWrite(LEDPin, LOW); 
  }
}
 
