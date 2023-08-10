int btnpin=8;
int movepin = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(movepin,OUTPUT);
  pinMode(btnpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(btnpin)){
    digitalWrite(movepin,HIGH);
  }
  else{
    digitalWrite(movepin,LOW);
  }
}
