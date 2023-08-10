int CLK = 6;
int CS = 5;
int DIN = 4; //定义了三个脚
 
void setup() {
  pinMode(CLK,OUTPUT);
  pinMode(CS,OUTPUT);
  pinMode(DIN,OUTPUT); //三个脚都是输出状态
}
 
void loop() {
   Delay_xms(50);
   Init_MAX7219();
   Delay_xms(2000);
   Write_Max7219(0x0f, 0x00);       //显示测试：1；测试结束，正常显示：0
   Write_Max7219(1,1);
   Write_Max7219(2,2);
   Write_Max7219(3,3);
   Write_Max7219(4,4); 
   Write_Max7219(5,5);
   Write_Max7219(6,6);
   Write_Max7219(7,7);
   Write_Max7219(8,8);
   while(1);
}
void Delay_xms(unsigned int x)
{
  unsigned int i,j;
  for(i=0;i<x;i++)
  for(j=0;j<112;j++);
}
//--------------------------------------------
//功能：向MAX7219(U3)写入字节
//入口参数：DATA 
//出口参数：无
//说明：
void Write_Max7219_byte(unsigned char DATA)         
{
    unsigned char i;    
    digitalWrite(CS,LOW);                
    for(i=8;i>=1;i--)
    {                  
      digitalWrite(CLK,LOW);    
      if(DATA&0X80)
           digitalWrite(DIN,HIGH);
      else
           digitalWrite(DIN,LOW);
      DATA<<=1;
      digitalWrite(CLK,HIGH);
     }                                 
}
//-------------------------------------------
//功能：向MAX7219写入数据
//入口参数：address、dat
//出口参数：无
//说明：
void Write_Max7219(unsigned char address,unsigned char dat)
{ 
   digitalWrite(CS,LOW);
   Write_Max7219_byte(address);           //写入地址，即数码管编号
   Write_Max7219_byte(dat);               //写入数据，即数码管显示数字 
   
   digitalWrite(CS,HIGH);                        
}
 
void Init_MAX7219(void)
{
   Write_Max7219(0x09, 0xff);       //译码方式：BCD码//1001
   Write_Max7219(0x0a, 0x02);       //亮度//1010
   Write_Max7219(0x0b, 0x07);       //扫描界限；4个数码管显示//1011
   Write_Max7219(0x0c, 0x01);       //掉电模式：0，普通模式：1//1100
   Write_Max7219(0x0f, 0x01);       //显示测试：1；测试结束，正常显示：0//1111
}
