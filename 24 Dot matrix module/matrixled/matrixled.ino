#include <LedControl.h>
 
int DIN = 7;
int CS = 8;
int CLK = 9;

 
LedControl lc=LedControl(DIN,CLK,CS,4);
 
void setup(){
 lc.shutdown(0,false);       //启动时，MAX7219处于省电模式
 lc.setIntensity(0,8);       //将亮度设置为最大值
 lc.clearDisplay(0);         //清除显示
}
 
void loop(){ 
    byte smile[8]=   {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};//笑脸
    byte neutral[8]= {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};//标准脸    
 
    printByte(test);//显示8
    delay(1000);//延时1秒
    printByte(neutral);//显示标准脸
    delay(1000);
}
 
//点阵显示函数
void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
