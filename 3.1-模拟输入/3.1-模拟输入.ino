#include "Arduino.h"
void setup() 
{
  Serial.begin(115200);

}

void loop() 
{
  int adcval=0 ,adcvals=0;
  for(int i=0;i<=20;i++)
  {
    adcval=analogRead(A0);
    adcvals=adcvals+adcval;
  }
  adcval=adcvals/20.00;
  Serial.print("voltage=");
  Serial.print(adcval*(5.00/1023.00));
  Serial.println("V");
}
