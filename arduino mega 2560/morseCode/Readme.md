morseCode
*********
Hacked the arducopter into a regular arduino atmega 2560, and used it in a simple morse code project. Hardware setup is shown below. Atmega 2560 pin 5 (PE3) = Arduino mega 2560 pin 5 = Arducopter PWM output pin 8.


Code description
****************
Program modulates LED on pin 5 to sends sos morse code i.e.

dot dot dot dash dash dash dot dot dot
. . . _ _ _ . . .



