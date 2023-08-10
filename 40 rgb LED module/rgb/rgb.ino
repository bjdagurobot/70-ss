int redpin = 9;       //RGB LED红灯的引脚9
int greenpin = 10;    //RGB LED绿灯的引脚10
int bluepin = 11;     //RGB LED蓝灯的引脚11
void setup() {
  pinMode(redpin,OUTPUT); // 定义LED的三种颜色引脚为输出引脚
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
}

void loop() {
  color(255,0,0);
  delay(200);
  color(0,255,0);
  delay(200);
  color(0,0,255);
  delay(200);
  color(255,255,255);
  delay(200);
}

//定义函数，分别定义写入输出值
void color(int red,int green ,int blue){
  analogWrite(redpin,red);
  analogWrite(greenpin,green);
  analogWrite(bluepin,blue);
}
