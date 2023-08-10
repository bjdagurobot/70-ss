void setup() {
  pinMode(8,INPUT);//触摸模块连接8引脚，并为输入模块
  pinMode(9,OUTPUT);//LED连接9引脚，并为输出模块
}

void loop() {
  int state = digitalRead(8);//读取触摸模块电平
  if(state){//判断触摸模块电平高低
    digitalWrite(9,HIGH);//LED亮
  }
  else{
    digitalWrite(9,LOW);//LED灭
  }
}
