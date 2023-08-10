int encoderPinA = 4;
int encoderPinB = 7;
int swpin =8;
boolean encoderALast = LOW; 
int count=0;
boolean oldstate;
boolean state;
void setup()
{
  pinMode(encoderPinA, INPUT);
  pinMode(encoderPinB, INPUT);
  pinMode(swpin,INPUT);
  digitalWrite(swpin,HIGH);
  oldstate =digitalRead(swpin);
  Serial.begin (9600);
}

void loop()
{
  state =digitalRead(swpin);
  if(oldstate!=state && state==LOW){
    count=0;
    Serial.println(count);
  }
  oldstate =state;
  boolean encoderA = digitalRead(encoderPinA);
  if ((encoderALast == HIGH) && (encoderA == LOW))
  {
    if (digitalRead(encoderPinB) == LOW)
    {
      count--;
    }
    else
    {
      count++;
    }
    Serial.println(count);
  }
  encoderALast = encoderA;
}
