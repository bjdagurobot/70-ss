#define LEDPin   4                         //外接led引脚
#define ButtonPin   12                         //外接按键引脚

void setup() {
  pinMode(LEDPin, OUTPUT);//led是输出
  pinMode(ButtonPin, INPUT);//按键是输入

}
 
void loop() {
  if(digitalRead(ButtonPin)){
     digitalWrite(LEDPin, HIGH); 
  }
  else{
    digitalWrite(LEDPin, LOW); 
  }
}
 
