void setup() {
 pinMode(8, OUTPUT);//LED的引脚8，并为输出引脚
 pinMode(A0,INPUT);//光敏电阻的引脚A0，并为输入引脚
 Serial.begin(9600);//打开波特率为9600串口
}
void loop(){
 int state = analogRead(A0);//读取光敏电阻模拟输入

  Serial.println(state);//串口输出光敏电阻输入模拟值
  if(state<800){//判断光敏电阻输入模拟值是否小于800
    digitalWrite(8,LOW);//灯亮起状态
  }
  else{
    digitalWrite(8,HIGH);//灯关闭状态
  }
}
