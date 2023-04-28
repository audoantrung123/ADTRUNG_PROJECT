bool status=false;
unsigned long long lastTime = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0)*100 ;
  int ivoltage= voltage;

  int sensorValue2 = analogRead(A1);
  float voltage2 = sensorValue2 * (5.0 / 1023.0)*100 ;
  int ivoltage2= voltage2;
  
  if (Serial.available() > 0) {
    // Đọc dữ liệu và lưu vào biến data
    char data = Serial.read();
    /*  if(data=='s')
      {
        status=true;
        lastTime = millis();    
      }
      
      // Hiển thị dữ liệu trên Serial Monitor
    //Serial.println(data);     
    }
    if (millis() - lastTime > 10000) status = false;*/
    if(data=='o')
    {
      status=true;
    }
    if(data=='d')
    {
      status=false;
    }  
  } 
  if(status==true)
    {
      Serial.print(ivoltage);
      Serial.print("%");
      Serial.print(ivoltage2);
      Serial.print("\n");
        // Chờ 0.1 giây trước khi đọc lại giá trị
      delay(100);  
    }  
}
