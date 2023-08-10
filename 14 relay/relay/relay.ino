int incomedata =0;
int relayPin =13;
void setup() {
  pinMode(relayPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    incomedata = Serial.read();
    if(incomedata == 'H'){
      digitalWrite(relayPin,HIGH);
      Serial.println("open");
    }
    else if(incomedata == 'L'){
      digitalWrite(relayPin,LOW);
      Serial.println("close");
    }
  }
}
