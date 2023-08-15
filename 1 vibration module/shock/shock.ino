void setup() {
  // //初始化数字引脚震动模块作为输出。
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   // HIGH是电压电平
  delay(1000);                       // 等一秒
  digitalWrite(2, LOW);    // 通过使电压为LOW来关闭震动
  delay(1000);                       // 等一秒
}
