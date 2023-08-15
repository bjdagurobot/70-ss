#include <max7219.h>

#define LEFT 0      // 显示数据靠左
#define RIGHT 1     // 显示数据靠右
// 定义引脚
#define MAX_DIN 15
#define MAX_CS 2
#define MAX_CLK 4
MAX7219 max7219(MAX_DIN, MAX_CS, MAX_CLK);

void setup() {
  Serial.begin(9600);
  max7219.Begin();     // 初始化

  max7219.DisplayText("Poao", 0); //Right justified    “xxxxxxx”  -- 八位字符/数字
  delay(3000);
}

void loop() {
  //Display HELLO right justified
 
  max7219.Clear();    // 清屏
  max7219.DisplayText("HELLO", RIGHT);
  delay(1000);

  //Display HELLO left justified
  max7219.Clear();   // 清屏
  max7219.DisplayText("HELLO", LEFT);
  delay(1000);

  //Display decimals right justified
  max7219.Clear();   // 清屏
  max7219.DisplayText("87.56F", RIGHT);
  delay(1000);

  //Display decimals left justified
  max7219.Clear();    // 清屏
  max7219.DisplayText("87.56F", LEFT);
  delay(1000);
}
