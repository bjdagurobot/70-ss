const int TR = 32;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(TR);
  Serial.println(x);
  delay(500);
}
