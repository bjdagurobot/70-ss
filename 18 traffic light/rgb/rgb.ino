/*
 * ESP32使用PWM实现呼吸灯程序
 */
 
/* 设置led输出引脚号 */
int ledR_pin = 2;
int ledR_ch =3;
/* 设置led输出引脚号 */
int ledG_pin = 4;
int ledG_ch = 1;
/* 设置led输出引脚号 */
int ledB_pin = 5;
int ledB_ch = 2;

void setup() 
{            
  Serial.begin(115200);
  delay(10); 

  /* 1. 使用ledc通道1，设置频率为1kHz，分辨率为10位 */
  ledcSetup(ledR_ch, 1000, 10);  

  /* 2. 将LED引脚绑定到ledc通道1 */
  ledcAttachPin(ledR_pin, ledR_ch);

  /* 3. 设置ledc通道占空比为512/1024=50% */
  ledcWrite(ledR_ch, 511);

    /* 1. 使用ledc通道1，设置频率为1kHz，分辨率为10位 */
  ledcSetup(ledG_ch, 1000, 10);  

  /* 2. 将LED引脚绑定到ledc通道1 */
  ledcAttachPin(ledG_pin, ledG_ch);

  /* 3. 设置ledc通道占空比为512/1024=50% */
  ledcWrite(ledG_ch, 511);

    /* 1. 使用ledc通道1，设置频率为1kHz，分辨率为10位 */
  ledcSetup(ledB_ch, 1000, 10);  

  /* 2. 将LED引脚绑定到ledc通道1 */
  ledcAttachPin(ledB_pin, ledB_ch);

  /* 3. 设置ledc通道占空比为512/1024=50% */
  ledcWrite(ledB_ch, 511);
}

void loop() 
{
  color(511, 0, 0);
  delay(1000);
  color(0, 511, 0);
  delay(1000);
  color(0, 0, 511);
  delay(1000);
  color(511, 511, 511);
  delay(1000);
}

void color(int red, int green, int blue){
  ledcWrite(ledR_ch, red); 
  ledcWrite(ledG_ch, green); 
  ledcWrite(ledB_ch, blue); 
}
