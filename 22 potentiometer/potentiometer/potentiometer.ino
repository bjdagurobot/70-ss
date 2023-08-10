void setup() {
  pinMode(10,INPUT);//电位器sw连接10引脚，并为输入
  pinMode(A0,INPUT);//电位器AOUT连接A0引脚，并为输入
  pinMode(11,OUTPUT);//LED连接11引脚，并为输出
  Serial.begin(9600);//打开波特率为9600串口
}

void loop() {
  int state = digitalRead(10);//读取电位器sw电平，高电平为按键未按下，低电平为按键按下
  int value = analogRead(A0);//读取电位器AOUT的模拟值，0-1023
  if(state==0){//判断是否未按下按键
    analogWrite(11,map(value,0,1023,10,255));//LED根据电位器输入的模拟值，变化亮度
  }
  else{
    digitalWrite(11,LOW);//LED关闭 
  }
  Serial.println(value);//串口输出电位器模拟值
}
