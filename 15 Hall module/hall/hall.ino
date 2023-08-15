const int hallAO = 32;
const int hallDO = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(hallAO,INPUT);
  pinMode(hallDO,INPUT);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(hallAO);
  Serial.println(x);
  if(digitalRead(hallDO)==1){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
  delay(500);
}
