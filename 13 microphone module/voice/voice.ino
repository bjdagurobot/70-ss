const int voiceAO = 32;
const int voiceDO = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(voiceAO,INPUT);
  pinMode(voiceDO,INPUT);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(voiceAO);
  Serial.println(x);
  if(digitalRead(voiceDO)==1){
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
  delay(50);
}
