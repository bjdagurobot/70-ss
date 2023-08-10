void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);//r
  pinMode(6,OUTPUT);//g
  pinMode(7,OUTPUT);//o 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  delay(5000);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  delay(5000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(2000);
}
