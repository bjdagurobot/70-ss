#include <Wire.h>

//IIC管脚为GPIO 21（SDA）、GPIO 22（SCL）
//如果要使用其他管脚，在使库函数时，只需调用：Wire.begin(SDA, SCL);
//OLED的地址是 0X3c（7位）
//时间发生器PCF8563T 地址是0X51

//温度sht30 地址0x44

byte temp[6];  //6个数据：温度高位，温度低位，温度CRC，湿度高位，湿度低位，湿度CRC
int wendu, shidu;

void setup(){
  Serial.begin(115200); 
  Wire.begin(); 
}
 
void loop(){

    
    Wire.beginTransmission(0x44);     //发开启传输Start + 地址0x44（7位） + 写入Bit（1位）
    Wire.write(0x2C);                 //写入命令 0x2C：开启Clock stretching   0x24：关闭Clock stretching （开启的时候会在没有转换完之前拉低时钟信号，迫使IIC等待转换 大概 9.2ms）
    Wire.write(0x06);                 //写入命令 0x06 重复率高，慢，重复率越高，转换持续的时间越长，功耗越高，但是转换精度越高。
    Wire.endTransmission();           //停止Stop

//    Wire.requestFrom(0x44, 0x06, false);  //将输据读出到缓存 地址 6个字节 结束后Stop；false和true在波形上看不到区别
    Wire.requestFrom(0x44, 0x06, true);  //将输据读出到缓存 地址 6个字节 结束后Stop；
    temp[0] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    temp[1] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    temp[2] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    temp[3] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    temp[4] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    temp[5] = Wire.read();            // 接收并读取从机发来的一个字节的数据
    //Wire.endTransmission();         //发完后自动会发Stop，不需要这句话

    wendu = temp[0]<<8 | temp[1];     //高位左移8位 并上低位
    shidu = temp[3]<<8 | temp[4];     //高位左移8位 并上低位

    float wendufloat = (float)wendu / 65535 * 175 - 45;   //公式就是这样
    float shidufloat = ((float)shidu / 65535) * 100 ;     //公式就是这样

    Serial.printf("wendu = %02X %02X  ; shidu = %02X %02X ;\r\n",temp[0],temp[1],temp[3],temp[4]);
    Serial.printf("wendu = %04X ; shidu = %04X;\r\n",wendu, shidu);
    Serial.printf("wendu = %f ; shidu = %f;\r\n",wendufloat, shidufloat);

//
//    Serial.println("The iic device list!");  //用于检测在线的IIC设备地址
//   for(int i=0x01;i<127;i++)
//   {
//     Wire.beginTransmission(i);
//     if(Wire.endTransmission()==0)
//     {
//       Serial.print("0x");
//       Serial.println(i,HEX);
//     }
//   }

  delay(1000);

}
