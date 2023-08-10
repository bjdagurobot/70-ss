#include <dht11.h>                       //引用dht11库文件，使得下面可以调用相关参数
#define DHT11PIN 4                      //定义温湿度针脚号为4号引脚
dht11 DHT11;                             //实例化一个对象

void setup() {
  Serial.begin(9600);                    //设置波特率参数
  pinMode(DHT11PIN, OUTPUT);             //定义输出口
}

void loop() {
  int chk = DHT11.read(DHT11PIN);        //将读取到的值赋给chk

  float tem = DHT11.temperature;         //将温度值赋值给tem
  float hum = DHT11.humidity;            //将湿度值赋给hum
  Serial.print("Tempeature:");           //打印出Tempeature:
  Serial.println(tem);                   //打印温度结果

  Serial.print("Humidity:");            //打印出Humidity:
  Serial.print(hum);                    //打印出湿度结果                                  
  Serial.print(“%”);                    //打印出%

  delay(1000);                          //延时一段时间

}
