// C++ code
//
#include <Servo.h>

int inipos = 90;
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
}
