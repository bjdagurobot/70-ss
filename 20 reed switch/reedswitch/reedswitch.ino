void setup() {
  pinMode(6,INPUT);
pinMode(13,OUTPUT); 
}

void loop() {
  if(digitalRead(6)){
    digitalWrite(13,LOW);
  }
  else{
    digitalWrite(13,HIGH);
  }
}
