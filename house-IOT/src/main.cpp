#include <Arduino.h>

#define acionarele 8 
#define LesensorPIR 7
int LeituraSensor; 
 
void setup()
{
   pinMode(acionarele, OUTPUT); 
   pinMode(LesensorPIR, INPUT); 
   Serial.begin(9600);
}
 
void loop()
{
  //Le o sensor de presenca
  LeituraSensor = digitalRead(LesensorPIR);
 
  //Nao ha deteccao de movimento
   if (LeituraSensor == LOW) 
   {
     Serial.println("Nada");
   }
   //Ha movimento detectado - acende lampada
   else 
   {
      Serial.println("Presença");
   }
   delay(1000);
}