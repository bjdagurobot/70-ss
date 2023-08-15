/*
 * ESP32使用PWM实现呼吸灯程序
 */
 
/* 设置led输出引脚号 */
int ledR_pin = 2;
/* 设置led输出引脚号 */
int ledG_pin = 4;
/* 设置led输出引脚号 */
int ledY_pin = 5;

void setup() 
{            
  Serial.begin(115200);
  delay(10); 
  pinMode(ledR_pin,OUTPUT);
  pinMode(ledG_pin,OUTPUT);
  pinMode(ledY_pin,OUTPUT);
}

void loop() 
{
  color(1, 0, 0);
  delay(1000);
  color(0, 1, 0);
  delay(1000);
  color(0, 0, 1);
  delay(1000);
  color(1, 1, 1);
  delay(1000);
}

void color(int red, int green, int yellow){
  digitalWrite(ledR_pin, red); 
  digitalWrite(ledG_pin, green); 
  digitalWrite(ledY_pin, yellow); 
}
