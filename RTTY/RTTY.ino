// sintonizado no Baofeng em 144.100 MHz
//
// no Linux
// minimodem --rx 50 --mark 2295 --space 2125 -8
// manter baixo o nivel do microfone interno
// codigo exemplo
// http://emmanuelgranatello.blogspot.com.br/2012/07/arduino-rtty.html

#include <RTTY.h>
 
//float tempC;
//int tempPin = 0;
//char buffer [50];
 
void setup()
{
  /*
My Library RTTY accepts a single parameter in the
constructor (output audio tone)
  */
  RTTY.attach(8);
}
 
void loop()
{
  //tempC = analogRead(tempPin);
  //tempC = (5.0 * tempC * 100.0)/1024.0;
 
  //RTTY.tx(" Remote Temperature Sensor ");
  RTTY.tx(" \n");
  RTTY.tx(" Enviando dados por RTTY \n");
  RTTY.tx("  _ ___ __  \n");
  RTTY.tx(" | | __/ _| \n");
  RTTY.tx(" | | _( (_  \n");
  RTTY.tx(" |_|_| \\__| \n");
  RTTY.tx("            by PU5NIX \n");
  //dtostrf(tempC, 2, 2, buffer);
  //RTTY.tx(buffer);
  //RTTY.tx("c\n");
}
