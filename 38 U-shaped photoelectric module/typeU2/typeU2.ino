float val = 0;
float time;
float Speed;
volatile byte state = LOW;
void setup() {
attachInterrupt(0,count,CHANGE);
//pinMode(2,INPUT);
pinMode(5,OUTPUT);
pinMode(10,OUTPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop() {
 digitalWrite(10, HIGH);
 analogWrite(5, 50);
 time =millis();
 Speed = (val/40)/(time/60000);
 Serial.println(Speed);
 if(digitalRead(2)){
  digitalWrite(13,HIGH);
 }
 else
  digitalWrite(13,LOW);
}

void count(){
  val+=1;//用于算速度
}
