const int IB=10;//模块IB连接10引脚
const int IA=12;//模块IA连接12引脚

void setup() {
  pinMode(IB, OUTPUT);//IB为输出
  pinMode(IA, OUTPUT);//IA为输出
}

void loop() {
 Forward();//MA1路电机正转，PWM调速
 delay(1000);
 Stop();//MA2路电机反转，PWM调速
 delay(1000); }

void Forward() 
{
     digitalWrite(IB,LOW);
     digitalWrite(IA,HIGH);  
  }
  
void Stop() 
{    
    digitalWrite(IB,HIGH);
    digitalWrite(IA, LOW); 
  }
