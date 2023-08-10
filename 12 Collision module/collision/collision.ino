void setup() {
  pinMode(4,INPUT);//模块连接4引脚，并为输入
  Serial.begin(9600);//打开波特率为9600串口
}

void loop() {
  Serial.println(digitalRead(4));//串口输出读取模块数字值
}
