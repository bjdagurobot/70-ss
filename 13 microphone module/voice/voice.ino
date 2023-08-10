void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(A0,INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
 int astate = analogRead(A0);
  int dstate = digitalRead(2);
  if(dstate==0){
    Serial.print("数字接口：");
    Serial.println(dstate);
    Serial.print("模拟接口：");
    Serial.println(astate);
    analogWrite(11,(map(astate, 1, 1023, 1, 255)));
  }
else {
    digitalWrite(11,LOW);
  }
}
