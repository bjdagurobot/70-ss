#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup(void) {
  u8g2.begin();
}

const uint8_t rook_bitmap[] U8X8_PROGMEM = {

  0x00,         // 00000000

  0x55,         // 01010101

  0x7f,         // 01111111

  0x3e,         // 00111110

  0x3e,         // 00111110

  0x3e,         // 00111110

  0x3e,         // 00111110

  0x7f          // 01111111

};

 

void draw(){
    u8g2.drawXBMP(0,0, 8, 8, rook_bitmap);
}



void loop(void) {
  u8g2.clearBuffer();
  draw();
  u8g2.sendBuffer();
  delay(1000);
}
