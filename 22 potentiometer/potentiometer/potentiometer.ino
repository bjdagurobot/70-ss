void setup() {
  pinMode(4,INPUT);//电位器sw连接10引脚，并为输入
  pinMode(A4,INPUT);//电位器AOUT连接A4引脚，并为输入
  //pinMode(2,OUTPUT);//LED连接11引脚，并为输出
  analogReadResolution(9);    //分辨率设置
   /* 1. 使用ledc通道1，设置频率为1kHz，分辨率为10位 */
  ledcSetup(1, 1000, 10);  
  /* 2. 将LED引脚绑定到ledc通道1 */
  ledcAttachPin(2, 1);
  /* 3. 设置ledc通道占空比为512/1024=50% */
  ledcWrite(1, 511);
  Serial.begin(9600);//打开波特率为9600串口
}

void loop() {
  int state = digitalRead(4);//读取电位器sw电平，高电平为按键未按下，低电平为按键按下
  int value = analogRead(A4);//读取电位器AOUT的模拟值，0-1023
  if(state==0){//判断是否未按下按键
    ledcWrite(1, value);           //LED根据电位器输入的模拟值，变化亮度
  }
  else{
    digitalWrite(2,LOW);//LED关闭 
  }
  Serial.println(value);//串口输出电位器模拟值
}
