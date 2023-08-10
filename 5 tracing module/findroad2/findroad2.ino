int data[2];
void setup() {
  pinMode(A0,INPUT);//LA
  pinMode(A1,INPUT);//RA

  Serial.begin(9600);
}

void loop() {
  distanceonA();
}

void distanceonA(){
  data[0] = analogRead(A0);
  data[1] = analogRead(A1);

  if(data[0]>500 && data[1]>500){
    Serial.println("stop");
  }
  if(data[0]<500 && data[1]<500 ){
    Serial.println("go");
  }
  if(data[0]<500  && data[1]>500 ){
    Serial.println("right");
  }
  if(data[0]>500  && data[1]<500 ){
    Serial.println("left");
  }
}
