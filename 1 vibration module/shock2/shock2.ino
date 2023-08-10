int movePin = 9;
int buttonpin = 8;
byte value= 0;
int oldstate =0;
int state = 0;
int increase =15;
void setup() {
 pinMode(movePin,OUTPUT);
 pinMode(buttonpin,INPUT);
 Serial.begin(9600);
}
void loop(){
 state = digitalRead(buttonpin);
 if(value == 255){
    increase =-15;
  }
 if(value ==0){
    increase =15;
  }
 if(state == 1 && oldstate == 0){
    value += increase;
 } 
 oldstate = state;
 analogWrite(movePin,value);
 Serial.println(value);
}
