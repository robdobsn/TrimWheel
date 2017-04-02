
TrimWheel for flight simulator 
Rob Dobson 2017

Using a Teensy 3.2 which makes this super easy.
Also an AS5048A rotation sensor http://ams.com/eng/Products/Magnetic-Position-Sensors/Angle-Position-On-Axis/AS5048A
Specifically the evaluation board shown on this page https://www.digikey.com/reference-designs/en/sensor-solutions/other-sensing-solutions/155

Connections to Teensy 3.2

AS5048A Board         Teensy 3.2
GND                   GND
3V3                   3V3
5V                    3V3
MOSI                  DOUT (11)
MISO                  DIN (12)
SCK                   SCK (13)
SDA                   CS (10)
PWM	                  N/C

Program the Teensy with the Arduino IDE, selecting:
- board type Teensy 3.2
- USB Type: "Serial + Keyboard + Mouse + Joystick"
- CPU speed 24 MHz (didn't work at highest rate)

Plug the teesny into USB on flight simulator computer.
It should appear as SerialKeyboardMouseJoystick or similar
Follow instructions for adding any trim wheel such as Saitek - e.g. Youtube video here https://www.youtube.com/watch?v=amHL0R29KL0

More details at http://robdobson.com/2017/04/flight-trim/