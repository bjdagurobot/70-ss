#define SensorLED     13
#define SensorINPUT   3  //模块连接引脚3，是中断1
unsigned char state = 0;
void setup() 
{ 
  pinMode(SensorLED, OUTPUT); 
  pinMode(SensorINPUT, INPUT);
  attachInterrupt(1, blink, CHANGE);//当模块电平发生变化时，触发中断
}
void loop()
{
      if(state!=0)
      {
        state = 0;
        digitalWrite(SensorLED,HIGH);
        delay(500);
      }  
      else 
        digitalWrite(SensorLED,LOW);
} 
void blink()//Interrupts function
{
  state++;
}
