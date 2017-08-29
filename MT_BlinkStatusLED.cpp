/*
 * MT_BlinkStatusLED.cpp - Library to handle quick blinking of the status LED on Arduino boards.
 * Note: This is basic usage and will halt the thread.
 * Created by MTS Standish (mattThurstan), 2017.
 * Copyleft.
 */
 
 #include "Arduino.h"
 #include "MT_BlinkStatusLED.h"
 
 MT_BlinkStatusLED::MT_BlinkStatusLED(int pin) {
	 pinMode(pin, OUTPUT);                 //Setup the internal LED on given pin
	 _pin = pin;
 }
 void MT_BlinkStatusLED::Blink1() {
	digitalWrite(_pin, HIGH);
	delay(250);
	digitalWrite(_pin, LOW);
	delay(250); 
 }
 void MT_BlinkStatusLED::Blink2() {
	Blink1();
	Blink1();
 }
 void MT_BlinkStatusLED::Blink3() {
	Blink1();
	Blink1();
	Blink1();
 }