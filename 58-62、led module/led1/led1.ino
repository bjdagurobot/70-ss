int LEDpin = 12;    // LED的引脚12

void setup() {
  pinMode(LEDpin, OUTPUT); // 定义LED的引脚为输出引脚
}

void loop() {
  digitalWrite(LEDpin, HIGH);   //写入输出值为高
  delay(1000); 
  digitalWrite(LEDpin, LOW);   //写入输出值为低
  delay(1000);
}
