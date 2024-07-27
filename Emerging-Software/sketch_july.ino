#include <SunPosition.h>
#include <TimeLib.h>
#include <AccelStepper.h>

const float latitude = 33.753746;
const float longitude = -84.386330;

unsigned long unix = 1698883200

#define MotorInterfaceType 4


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setTime(unix);
}

void loop() {
  // put your main code here, to run repeatedly:
  unix = now();

  int year = year(unix);
  int month = month(unix);
  int day = day(unix);
  int hour = hour(unix);
  int minute = minute(unix);
  int second = second(unix);

  SunPosition sun;
  sun.calculate(year,month,day,hour,minute,second)

  

}