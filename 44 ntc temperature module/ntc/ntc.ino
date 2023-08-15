#define LEDPin   4                         
#define ntcdo   12                
         
void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(ntcdo, INPUT);
  Serial.begin(9600);
}


void loop() {
  if(digitalRead(ntcdo)){
     digitalWrite(LEDPin, HIGH); 
  }
  else{
    digitalWrite(LEDPin, LOW); 
  }
  // 读取NTC电阻的模拟值
  float value = analogRead(A4);
  // 输出模拟值
  Serial.print("NTC analog （0-4095）: ");
  Serial.println(value);
  delay(1000);
} 
