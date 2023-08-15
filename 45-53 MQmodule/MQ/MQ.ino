const int potPin = A4;
const int potPinDo = 14;
const int Buzzer_PIN = 2;
//存储电位器值的变量
int potValue = 0;
 
void setup() {
    Serial.begin(115200);
    pinMode(potPin,INPUT);
    pinMode(potPinDo,INPUT);
    pinMode(Buzzer_PIN,OUTPUT);
    delay(1000);
}
 
void loop() {
    //读取模拟值
    potValue = analogRead(potPin);
    Serial.println(potValue);
    if(digitalRead(potPinDo)==1){
      Buzzer();
    }
    delay(500);
}

void Buzzer()  //无源蜂鸣器报警
{
    digitalWrite(Buzzer_PIN, HIGH);
    delayMicroseconds(200);  // 休眠微妙
    digitalWrite(Buzzer_PIN, LOW);
    delayMicroseconds(100);  // 休眠微妙
}
