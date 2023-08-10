#define    KEY_UP        4
#define    KEY_DOWN      7
#define    KEY_LEFT      8
#define    KEY_RIGHT     12
#define    KEY_ENTER     13

int key_release_flag = 1, i; 
int time_ticks = 0;

void setup()
{  
  pinMode(KEY_UP, INPUT);
  pinMode(KEY_DOWN, INPUT);
  pinMode(KEY_LEFT, INPUT);
  pinMode(KEY_RIGHT, INPUT);

  pinMode(KEY_ENTER, INPUT);
  digitalWrite(KEY_UP, HIGH);
  digitalWrite(KEY_DOWN, HIGH);
  digitalWrite(KEY_LEFT, HIGH);
  digitalWrite(KEY_RIGHT, HIGH);
  digitalWrite(KEY_ENTER, HIGH);
 
  Serial.begin(9600);
}

void loop()
{
  if((digitalRead(KEY_UP) == LOW) || (digitalRead(KEY_DOWN) == LOW) || (digitalRead(KEY_LEFT) == LOW) || (digitalRead(KEY_RIGHT) == LOW) || (digitalRead(KEY_ENTER) == LOW))
  {
    if(key_release_flag)
    {
      delay(10);
      
      if((digitalRead(KEY_UP) == LOW) || (digitalRead(KEY_DOWN) == LOW) || (digitalRead(KEY_LEFT) == LOW) || (digitalRead(KEY_RIGHT) == LOW) || (digitalRead(KEY_ENTER) == LOW))
      {
        key_release_flag = 0;
        if(digitalRead(KEY_UP) == LOW)
          Serial.print("you press UP\n");
        else if(digitalRead(KEY_DOWN) == LOW)
          Serial.print("you press DOWN\n");
        else if(digitalRead(KEY_LEFT) == LOW)
          Serial.print("you press LEFT\n");
        else if(digitalRead(KEY_RIGHT) == LOW)
          Serial.print("you press RIGHT\n");
        else if(digitalRead(KEY_ENTER) == LOW)
          Serial.print("you press ENTER\n");
      }
    }
  }
  else
    key_release_flag = 1;
}
