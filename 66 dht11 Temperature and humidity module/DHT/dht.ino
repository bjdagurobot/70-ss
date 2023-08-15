#include "DHTesp.h" //引入DHTesp头文件，为下面调用函数做准备。

const int DHT_PIN = 15; //定义一个整形变量，GPIO-15来接收来自传感器的数据

DHTesp dhtSensor; //定义一个DHT传感器
//arduino里的setup函数，执行一次
void setup() {
  Serial.begin(115200); //串口的速率
  dhtSensor.setup(DHT_PIN, DHTesp::DHT11);//把DHT11与15引脚关联。
}
//loop函数循环执行。
void loop() {
  TempAndHumidity  data = dhtSensor.getTempAndHumidity();//接受来自传感器的温度湿度数据，存入data变量
  Serial.println("Temp: " + String(data.temperature, 2) + "°C");//开始通过串口显示变量的温度信息
  Serial.println("Humidity: " + String(data.humidity, 1) + "%");//显示湿度信息
  Serial.println("---");//打印分隔符
  delay(1000);//延迟1秒，1000毫秒
}
