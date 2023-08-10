#include "U8glib.h"  //加载显示库文件
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0); 
// I2C / TWI 实例化
 
void setup() {
}

void loop() {
  u8g.firstPage();  //一下是显示实现部分
  do {
     u8g.setFont(u8g_font_fub14);//设置字体和自号
     u8g.setPrintPos(0, 50); //显示的位置
     u8g.print("Hello World!"); 
  } 
  while( u8g.nextPage() );
}
