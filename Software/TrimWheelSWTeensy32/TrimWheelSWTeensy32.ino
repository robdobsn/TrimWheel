#include "AS5048A.h"


AS5048A angleSensor(10);

void setup()
{
	Serial.begin(19200);
	angleSensor.init();
}

int infoCount = 0;

void loop()
{
	delay(100);

	word val = angleSensor.getRawRotation();
  word joyVal = val/16;
  
  Joystick.X(joyVal);

  if (++infoCount > 10)
  {
    infoCount = 0;
  	Serial.print("Got rotation of: 0x");
  	Serial.print(val, HEX);
    Serial.print(" sending ");
    Serial.print(joyVal, DEC);
  	Serial.print(" State: ");
  	angleSensor.printState();
  	Serial.print(" Errors: ");
  	Serial.println(angleSensor.getErrors());
  }
}
