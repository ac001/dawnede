#include "WProgram.h"
#line 1 "example.pde"


const int pinRed = 7;
char x = '';

void setup()
{

	pinMode(pinRed, OUTPUT);

}

void loop()
{
	digitalWrite(pinRed, HIGH);
	delay(400);
	digitalWrite(pinRed, LOW);
	delay(200);
}
#line 1 "/home/arduino/arduino-0017/hardware/cores/arduino/main.cxx"
int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

