#include <Arduino.h>

void setup() 
{
  Serial.begin(9600);
}

void hello() 
{
  Serial.println("ECSE3038 - Engineering IoT Systems");
}

void loop()
{
  hello();
}