// NeoPixel测试程序显示使用白色通道的RGBW
//只有像素(在常规的RGB NeoPixel条带上看起来不正确)。

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> //需要16 MHz Adafruit Trinket
#endif

// Arduino的哪个引脚连接到NeoPixels?
//对于Trinket或Gemma，我们建议将其更改为1:
#define LED_PIN     4

// Arduino有多少NeoPixels ?
#define LED_COUNT  4

//声明我们的NeoPixel strip对象:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB +NEO_KHZ800);
//参数1 = NeoPixel条带的像素数
//参数2 = Arduino引脚编号(大多数是有效的)
//参数3 =像素类型标志，根据需要加在一起:
// NEO_KHZ800 800 KHz比特流(大多数NeoPixel产品w/WS2812 led)
// NEO_KHZ400 400 KHz(经典'v1'(不是v2) FLORA像素，WS2811驱动程序)
// NEO_GRB像素为GRB比特流连接(大多数NeoPixel产品)
// NEO_RGB像素为RGB比特流连接(v1 FLORA像素，而不是v2)
// NEO_RGBW像素为RGBW比特流连接(NeoPixel RGBW产品)

void setup() {
//这些线路专门支持Adafruit Trinket 5V 16mhz。
//任何其他板，你可以移除这部分(但没有伤害):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  strip.begin();           //初始化新像素条对象(REQUIRED)
  strip.show();            //关闭所有像素
  strip.setBrightness(100);
  Serial.begin(115200);
  Serial.println(strip.numPixels());
}

void loop() {
  
  //沿着条的长度填充不同的颜色…
  colorWipe(strip.Color(255,   0,   0)     , 1000); //红色
  colorWipe(strip.Color(  0, 255,   0)     , 1000); //绿色
  colorWipe(strip.Color(  0,   0, 255)     , 1000); // 蓝色
  colorWipe(strip.Color(  0,   0,   0, 255), 1000); // 真白色(不是RGB白色)

}


void colorWipe(uint32_t color, int wait) {
strip.setPixelColor(0, color);  
strip.setPixelColor(1, color);  
strip.setPixelColor(2, color);  
    strip.setPixelColor(3, color);         //设置像素的颜色
    strip.show();                          //更新条带匹配
    delay(wait);                           //暂停一会儿
}
