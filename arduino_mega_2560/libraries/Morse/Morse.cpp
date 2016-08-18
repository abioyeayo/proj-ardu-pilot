\*
  Morse.h - Flashing Morse code library
  Originally Created by David Mellis (02 Nov 2007)
  Updated by Ayo Abioye (18 Aug 2016)
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Morse::dot()
{
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin, HIGH);
	delay (1000);
	digitalWrite(250);
}