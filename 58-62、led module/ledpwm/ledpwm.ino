/*
 * ESP32使用PWM实现呼吸灯程序
 */
 
/* 设置led输出引脚号 */
int led_pin = 2;
int led_ch = 1;

void setup() 
{            
  Serial.begin(115200);
  delay(10); 

  /* 1. 使用ledc通道1，设置频率为1kHz，分辨率为10位 */
  ledcSetup(led_ch, 1000, 10);  

  /* 2. 将LED引脚绑定到ledc通道1 */
  ledcAttachPin(led_pin, led_ch);

  /* 3. 设置ledc通道占空比为512/1024=50% */
  ledcWrite(led_ch, 511);
}

void loop() 
{
  int dir = 0;
  int pwmval = 255;
  while(1)
  {
    if(dir) {
      pwmval++;                 // dir==1  pwmval递增
    }
    else {
      pwmval--;                    // dir==0  pwmval递减
    }
    if( pwmval == 0 ) {
      dir=1;          // pwmval降低至0后，方向为递增
    }
    if( pwmval >= 500){
      dir=0;         // pwmval递增到500后，方向改为递减
    }
    ledcWrite(led_ch, pwmval);           // 修改占空比
    if( pwmval==0 ) {
      delay(1000);    // 在LED熄灭时等待1000ms
    }
    delay(10);
  }
}
