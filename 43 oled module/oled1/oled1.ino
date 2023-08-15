#include <Arduino.h>
#include <U8g2lib.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0 ,U8X8_PIN_NONE);

void setup() {
  u8g2.begin();//初始化
  u8g2.setFont(u8g2_font_unifont_t_chinese2);//设定字体
}

void loop() {
  u8g2.firstPage();
do {
    u8g2.drawStr(0, 10, "Hello World");//在指定位置显示字符串
  } while ( u8g2.nextPage() );
}   
    
 
