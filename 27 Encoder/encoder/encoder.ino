#define Aio 18
#define Bio 19
#define btn 15
#define led 2
int flag = 0;  //标志位
boolean CW_1 = 0;
boolean CW_2 = 0;
int dir = 0;
void Aio_inter() {
  // 只要处理一个脚的外部中断--上升沿&下降沿
  int alv = digitalRead(Aio);
  int blv = digitalRead(Bio);
  if (flag == 0 && alv == LOW) {
    CW_1 = blv;
    flag = 1;
  }
  if (flag && alv) {
    CW_2 = !blv;  //取反是因为 alv,blv必然异步，一高一低。
    if (CW_1 && CW_2) {
      dir++;
    }
    if (CW_1 == false && CW_2 == false) {
      dir--;
    }
    flag = 0;
  }
  //Serial.printf("dir : %d",dir);
}
void setup(){
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
  pinMode(Aio, INPUT);
  pinMode(Bio, INPUT);
//只要消耗一个外部中断资源
  attachInterrupt(Aio, Aio_inter, CHANGE);
}
int marknum =0;
//变量dir在中断里处理，loop中随时调用
void loop(){
  if(digitalRead(btn)){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
  if(marknum!=dir){
    Serial.printf("dir : %d",dir);
    Serial.println();
    marknum = dir;
  }
  delay(50); 
}
