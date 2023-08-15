void setup() {
  // //初始化数字引脚继电器作为输出。
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   // HIGH是电压电平
  delay(1000);                       // 等一秒
  digitalWrite(2, LOW);    // 通过使电压为LOW来关闭继电器
  delay(1000);                       // 等一秒
}
