#define NOTE_D0 -1 
#define NOTE_D1 262 
#define NOTE_D2 294 
#define NOTE_D3 330 
#define NOTE_D4 350 
#define NOTE_D5 393 
#define NOTE_D6 441 
#define NOTE_D7 495 

#define NOTE_DL1 131 
#define NOTE_DL2 147 
#define NOTE_DL3 165 
#define NOTE_DL4 175 
#define NOTE_DL5 196 
#define NOTE_DL6 221 
#define NOTE_DL7 248 

#define NOTE_DH1 525 
#define NOTE_DH2 589 
#define NOTE_DH3 661 
#define NOTE_DH4 700 
#define NOTE_DH5 786 
#define NOTE_DH6 882 
#define NOTE_DH7 990  
//以上部分是定义是把每个音符和频率值对应起来，其实不用打这么多，但是都打上了，后面可以随意编写

int tune[] =  
{  
 NOTE_D1,NOTE_D2,NOTE_D3,NOTE_D1,
 NOTE_D1,NOTE_D2,NOTE_D3,NOTE_D1,
 NOTE_D3,NOTE_D4,NOTE_D5,
 NOTE_D3,NOTE_D4,NOTE_D5,
 NOTE_D5,NOTE_D6,NOTE_D5,NOTE_D4,NOTE_D3,NOTE_D1,
 NOTE_D5,NOTE_D6,NOTE_D5,NOTE_D4,NOTE_D3,NOTE_D1,
 NOTE_D1,NOTE_D5,NOTE_D1,
 NOTE_D1,NOTE_D5,NOTE_D1};//这部分就是整首曲子的音符部分，用了一个序列定义为tune，整数

float duration[]= 

{  
  1,1,1,1,
  1,1,1,1,
  1,1,1+1,
  1,1,1+1,
  0.5+0.5,0.25+0.5,0.5+0.5,0.25+0.5,1,1,
  0.5+0.5,0.25+0.5,0.5+0.5,0.25+0.5,1,1,
  1,1,1+1,
  1,1,1+1};
 //这部分是整首曲子的节拍部分，也定义个序列duration，浮点（数组的个数和前面音符的个数是一样的，一一对应么）

int length;//这里定义一个变量，后面用来表示共有多少个音符

int tonePin=9;//蜂鸣器的pin 

void setup() 
{  
  pinMode(tonePin,OUTPUT);//设置蜂鸣器的pin为输出模式
  length = sizeof(tune)/sizeof(tune[0]);//这里用了一个sizeof函数， 可以查出tone序列里有多少个音符
} 

void loop() 
{  
  for(int x=0;x<length;x++)//循环音符的次数
  {  
    tone(tonePin,tune[x]);//此函数依次播放tune序列里的数组，即每个 音符
    delay(400*duration[x]);//每个音符持续的时间，即节拍duration，是调整时间的越大，曲子速度越慢，越小曲子速度越快，自己掌握吧
noTone(tonePin);//停止当前音符，进入下一音符
  } 
  delay(5000);//等待5秒后，循环重新开始
}
