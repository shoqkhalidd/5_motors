#include <Servo.h>

// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int inipos = 90;z
int pos=0;

Servo ser01;
Servo ser02;
Servo ser03;
Servo ser04;
Servo ser05;

void setup()
{
 ser01.attach(12);
 ser02.attach(11);
 ser03.attach(10);
 ser04.attach(9);
 ser05.attach(8);
 
 ser01.write(inipos);
 ser02.write(inipos);
 ser03.write(inipos);
 ser04.write(inipos);
 ser05.write(inipos);
}

void loop()
{
  for(pos=inipos;pos<=190;pos++){
   ser01.write(pos);
   delay(20);
   ser02.write(pos);
   delay(20);   
   ser03.write(pos);
   delay(20);
   ser04.write(pos);
   delay(20);
   ser05.write(pos);
   delay(20);
  }
}