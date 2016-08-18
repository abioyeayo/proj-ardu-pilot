\*
  Morse.h - Flashing Morse code library
  Originally Created by David Mellis (02 Nov 2007)
  Updated by Ayo Abioye (18 Aug 2016)
  Released into the public domain.
*/

#ifndef Morse_h
#define Morse_h
  #include "Arduino.h"
#end if

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};