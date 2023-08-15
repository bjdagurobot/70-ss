const int potPin = A5;
 
//存储模拟值的变量
int potValue = 0;
 
void setup() {
    Serial.begin(115200);
    delay(1000);
}
 
void loop() {
    //读取雨滴模拟值
    potValue = analogRead(potPin);
    Serial.println(potValue);
    delay(500);
}
