void setup(){
  pinMode(15,INPUT_PULLUP);
  pinMode(19,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(18,INPUT_PULLUP);

  Serial.begin(9600);
}
void loop(){
  if(!digitalRead(15)){
    Serial.println("UP");
  //  while(!digitalRead(15)){;}
  }
  if(!digitalRead(19)){
    Serial.println("DOWN");
   // while(!digitalRead(2)){;}
  }
  if(!digitalRead(4)){
    Serial.println("LEFT");
  //  while(!digitalRead(4)){;}
  }
  if(!digitalRead(5)){
    Serial.println("RIGHT");
  //  while(!digitalRead(5)){;}
  }
  if(!digitalRead(18)){
    Serial.println("MIDDLE");
  //  while(!digitalRead(18)){;}
  }

  delay(100);
}
