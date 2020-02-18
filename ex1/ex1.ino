#include <Wire.h>
int i = 0;
int j = 0;
void setup(){
  Wire.begin();
  Serial.begin(9600);
}

void loop(){
  Wire.beginTransmission(0b00000001);
  Wire.write(i++);
  Wire.endTransmission();
  Wire.beginTransmission(0b00000010);
  Wire.write(j++);
  Wire.endTransmission();
  if (i > 9) {
    i = 0;
  }
  if (j > 9) {
    j = 0;
  }
  delay(500);
}
