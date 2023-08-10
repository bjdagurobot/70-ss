void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
  
void loop() {
  int value = analogRead(A0);
  Serial.println(value);
  if (value>400) {
    digitalWrite(13, LOW);
  }
  else {
    digitalWrite(13, HIGH);
    delay(2000);
  }
}
