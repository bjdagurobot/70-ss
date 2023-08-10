int buttonpin = 8;             // 按键连接引脚8
int LEDpin = 12;         // LED的引脚12

void setup() {
  pinMode(LEDpin, OUTPUT);            // 定义LED的引脚为输出引脚
  pinMode(buttonpin,INPUT);                  // 定义按键引脚为输入引脚
}

void loop() {
  int state = digitalRead(buttonpin);           //读取输出值
  if(state == HIGH ){ // 检查输入是否为高，这里高为按下
    digitalWrite(LEDpin, HIGH);   // 灯亮起状态
  }
  else{
    digitalWrite(LEDpin, LOW);           // 灯关闭状态
  }
}
