int x,y,sw;
void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  y = analogRead(A1);
  sw = digitalRead(4);
  if(sw){
    digitalWrite(13,HIGH);
  }
  Serial.print("x:");
  Serial.println(x);
  Serial.print("y:");
  Serial.print(y);
  Serial.println();
}
