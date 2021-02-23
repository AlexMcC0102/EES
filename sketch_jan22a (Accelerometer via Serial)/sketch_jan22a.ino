#include "Nano33BLEAccelerometer.h"
Nano33BLEAccelerometerData accelerometerData;
int highX;
void setup()
{
  Accelerometer.begin();
}
void loop()
{ 
  if(Accelerometer.pop(accelerometerData))
  {
     Serial.printf("%f,%f,%f\r\n", accelerometerData.x, accelerometerData.y, accelerometerData.z);
     //Serial.printf("%f\r\n", accelerometerData.z);
     if(accelerometerData.x > 3){
      highX+=1;
      Serial.printf("%f\r\n", highX);
     }
    
  }
}
