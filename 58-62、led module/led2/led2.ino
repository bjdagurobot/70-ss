int ledPin = 10;    // LED的引脚10

void setup() {
 pinMode(ledPin,OUTPUT); // 定义LED的引脚为输出引脚
}
void loop(){
fadeOn(1000,5);
fadeOff(1000,5);
}

//定义函数，LED模拟输出值按自定义increament的逐增
void fadeOn(unsigned int time,int increament){
 for (byte value = 0 ; value < 255; value+=increament){
 analogWrite(ledPin, value);
 delay(time/(255/5));
 }
}

//定义函数，LED模拟输出值按自定义decreament的逐减
void fadeOff(unsigned int time,int decreament){
 for (byte value = 255; value >0; value-=decreament){
 analogWrite(ledPin, value);
 delay(time/(255/5));
 }
}
