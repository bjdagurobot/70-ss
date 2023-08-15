const int IB=14;//模块IB连接14引脚
const int IA=13;//模块IA连接13引脚

void setup() {
  pinMode(IB, OUTPUT);//IB为输出
  pinMode(IA, OUTPUT);//IA为输出
}

void loop() {
 Forward();//MA1路电机正转，PWM调速
 delay(1000);
 Back();//MA2路电机反转，PWM调速
 delay(1000); 
 Stop() ;
  delay(1000); }

void Forward() 
{
     digitalWrite(IB,LOW);
     digitalWrite(IA,HIGH);  
  }
 
void Back() 
{    
    digitalWrite(IB,HIGH);
    digitalWrite(IA, LOW); 
  }

  void Stop() 
{    
    digitalWrite(IB,LOW);
    digitalWrite(IA, LOW); 
  }
