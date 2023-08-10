int data[2];
void setup() {
  pinMode(9,INPUT);//LD
  pinMode(12,INPUT);//RD
  pinMode(A0,INPUT);//LA
  pinMode(A1,INPUT);//RA
  Serial.begin(9600);
}

void loop() {
distanceonD();
}

void distanceonD(){
  data[0] = digitalRead(9);
  data[1] = digitalRead(12);
  if(data[0] && data[1]){
    Serial.println("stop");
  }
  if(!data[0] && !data[1]){
    Serial.println("go");
  }
  if(!data[0] && data[1]){
    Serial.println("right");
  }
  if(data[0] && !data[1]){
    Serial.println("left");
  }
}
