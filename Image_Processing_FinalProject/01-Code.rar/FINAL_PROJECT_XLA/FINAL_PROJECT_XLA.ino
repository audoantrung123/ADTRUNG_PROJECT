#include <cvzone.h>
SerialData serialData(3,3); 
int valsRec[3];
int ledred = 7;   
int ledgreen1 = 2; 
int ledgreen2 = 4; 
int coi= 6;
int volume=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledred, OUTPUT);
 // pinMode(ledgreen1, OUTPUT);
  pinMode(ledgreen2, OUTPUT);
  pinMode(coi, OUTPUT);
  serialData.begin();
 // Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  serialData.Get(valsRec);
  analogWrite(coi, valsRec[0]); 

  digitalWrite(ledred, valsRec[1]);
 
  digitalWrite(ledgreen2, valsRec[2]);

// digitalWrite(ledgreen1, valsRec[3]);
  

 
}
