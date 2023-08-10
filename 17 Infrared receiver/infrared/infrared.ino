#include <IRremote.h>
int RecvPin =11;//红外接收模块连接引脚11
IRrecv irrecv(RecvPin);//初始化IRrecv实例
decode_results results;//接收到的数据results
void setup() {
  Serial.begin(9600);//打开波特率为9600的串口
  irrecv.enableIRIn();//实例允许接收数据
}

void loop() {
  if(irrecv.decode(&results)){//对results解码，并判断是否接收到数据
    Serial.println(results.value,HEX);//串口输出接收数据值，并以16进制输出
    irrecv.resume();//实例重新接收数据
  }
}
