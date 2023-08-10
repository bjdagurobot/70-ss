/*
 * connection:
 * MQ gas sensor     Uno R3
 * D0                  7
 * A0                  A0
 * GND                 GND
 * VCC                 5V
 */
const int ledPin=13;//the led attach to pin13
const int analogPin=A0;//the D0 on the Module attach to pin7 on the Arduino
const int digitalPin=7;//the D0 attach to pin7
int Astate=0;
boolean Dstate=0;

void setup(){
  //set the pins state
  pinMode(analogPin,INPUT);
  pinMode(digitalPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Astate=analogRead(analogPin);//read the value of A0
  Serial.println(Astate);//peint
  Dstate=digitalRead(digitalPin);//read the value of D0
  Serial.println(Dstate);//print
  if(Dstate==HIGH){//if the value of D0 is HIGH
    digitalWrite(ledPin,LOW);//turn off led
  }
  if(Dstate==LOW){
    digitalWrite(ledPin,HIGH);
  }
  delay(200);
}
