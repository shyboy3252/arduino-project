#include "Arduino.h"
#include "time.h"
void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{
    digitalWrite(LED_BUILTIN,1);
    delay(500);
    digitalWrite(LED_BUILTIN,0);
    delay(500);
}
