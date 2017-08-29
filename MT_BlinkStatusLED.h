/*
 * MT_BlinkStatusLED.h - Library to handle quick blinking of the status LED on Arduino boards.
 * Note: This is basic usage and will halt the thread.
 * Created by MTS Standish (mattThurstan), 2017.
 * Copyleft.
 */

#ifndef __MT_BLINKSTATUSLED_H__
#define __MT_BLINKSTATUSLED_H__

#include "Arduino.h"

/*----------------------------main header declerations----------------------------*/

class MT_BlinkStatusLED
{
  public:
	MT_BlinkStatusLED(int pin);
	void Blink1();
	void Blink2();
	void Blink3();
  private:
	int _pin;
};

#endif