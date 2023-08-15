#define AOLPin   A4                         //外接光敏引脚 32
#define DOLPin   4 
#define AORPin   A5                         //外接光敏引脚 33
#define DORPin   5 
#define ledPin 2
void setup() {
  pinMode(AOLPin,INPUT);
  pinMode(AORPin,INPUT);
  analogReadResolution(9);    //分辨率设置
    pinMode(DOLPin,INPUT);
    pinMode(DORPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.print("LEFT AO:");
  Serial.print(analogRead(AOLPin));
  Serial.print("  LEFT DO:");
  Serial.println(digitalRead(DOLPin));
  
  Serial.print("RIGHT AO:");
  Serial.print(analogRead(AORPin));
  Serial.print("  RIGHT DO:");
  Serial.println(digitalRead(DORPin));
  
  Serial.println();
  delay(500);
}
