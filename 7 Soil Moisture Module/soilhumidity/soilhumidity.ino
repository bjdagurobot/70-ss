void setup(){       
   Serial.begin(9600); //打开波特率为9600串口
   pinMode(A0,INPUT);//土壤湿度模块连接引脚A0，并为输入引脚
}   
void loop(){       
   Serial.print("Moisture Sensor Value:");//串口输出字符串
   Serial.println(analogRead(A0));     //串口输出读取土壤湿度模块输入模拟值
   delay(100);     
}
