void setup() {

pinMode(9,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(9))
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);
}
