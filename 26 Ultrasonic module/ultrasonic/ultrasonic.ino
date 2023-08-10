void setup() {
  pinMode(13,OUTPUT);//发送连接13引脚，并为输出
  pinMode(12,INPUT);//接收连接12引脚，并为输入
  Serial.begin(9600);//打开波特率为9600串口
}

void loop() {
  digitalWrite(13,LOW);//触发超声波测距
  delayMicroseconds(2);
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
  int distance = pulseIn(12,HIGH)/58;//计算距离
  Serial.println(distance);//串口输出距离
  delay(200);//延时200毫秒
}
