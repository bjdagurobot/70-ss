#define LDRPin   A4                         //外接光敏引脚
#define LDRPindo   4 
#define ledPin 26
void setup() {
  pinMode(LDRPin,INPUT);
    pinMode(LDRPindo,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(LDRPin));
  Serial.println(digitalRead(LDRPindo));
  if(digitalRead(LDRPindo)){
    digitalWrite(ledPin,LOW);
  }
  else{
    digitalWrite(ledPin,HIGH );
  }
}
