void setup() {
  pinMode(8,INPUT);  //定义按键引脚为8，并为输入引脚
  pinMode(9,OUTPUT); //定义有源蜂鸣器引脚为9，并为输出引脚
}

void loop() {
  int state = digitalRead(8);//读取按键输入值
  if(state){ // 检查输入是否为高，这里高为按下
    digitalWrite(9,HIGH);//蜂鸣器响起状态
  }
  else{
    digitalWrite(9,LOW);//蜂鸣器关闭状态
  }
}
