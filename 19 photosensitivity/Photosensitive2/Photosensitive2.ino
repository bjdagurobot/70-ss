void setup() {
 pinMode(8, OUTPUT); //LED的引脚8，并为输出引脚
 pinMode(9,INPUT); //光敏电阻的引脚9，并为输入引脚
 Serial.begin(9600); //打开波特率为9600串口
}
void loop(){
 int state = digitalRead(9); //读取光敏电阻数字输入

  Serial.println(state); //串口输出光敏电阻输入数字值
  if(state){ //判断光敏电阻输入数字值是否是否为高
    digitalWrite(8, HIGH); // 灯亮起状态
  }
  else{
    digitalWrite(8, LOW); // 灯关闭状态
  }
}
