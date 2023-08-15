const int trigPin = 4;
const int echoPin = 16;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(20);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //发送15us的脉冲
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin,LOW);

  //读取脉冲时长
  auto t = pulseIn(echoPin,HIGH);
  double dis = t*0.017;//单位cm
  Serial.print("距离：");
  Serial.print(dis);
  Serial.println("cm");
  delay(200);
}
