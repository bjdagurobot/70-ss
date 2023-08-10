int ledpin =13;
int hallpin =8;
int hallApin =A0; 
void setup() {
  pinMode(hallpin,INPUT);
  pinMode(hallApin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(huoerApin));
  if(digitalRead(huoerpin)){
    digitalWrite(ledpin,LOW);
  }
  else{
    digitalWrite(ledpin,HIGH);
    delay(500);
  }
}
