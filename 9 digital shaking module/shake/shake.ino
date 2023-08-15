//5V
#define SensorLED     2
#define SensorINPUT   32  
unsigned char state = 0;
void setup() 
{ 
  pinMode(SensorLED, OUTPUT); 
  pinMode(SensorINPUT, INPUT);
  attachInterrupt(SensorINPUT, blink, CHANGE);//当模块电平发生变化时，触发中断
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
