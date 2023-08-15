#define AOPin   A4                         //外接火焰引脚 32
#define DOPin   4 
#define ledPin 2
void setup() {
  pinMode(AOPin,INPUT);
  analogReadResolution(9);    //分辨率设置
    pinMode(DOPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(AOPin));
  //Serial.println(digitalRead(DOPin));
  if(digitalRead(DOPin)){
    digitalWrite(ledPin,LOW);
  }
  else{
    digitalWrite(ledPin,HIGH );
  }
  delay(500);
}
