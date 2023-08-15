int x,y,sw;
void setup() {
  pinMode(32,INPUT);
  pinMode(33,INPUT);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(32);
  y = analogRead(33);
  sw = digitalRead(4);
  if(sw){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
  Serial.print("x:");
  Serial.println(x);
  Serial.print("y:");
  Serial.print(y);
  Serial.println();
}
