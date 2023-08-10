void setup() {
  pinMode(3,INPUT);
  pinMode(13,OUTPUT);
}
  
void loop() {
  if (digitalRead(3)) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
    delay(2000);
  }
}
