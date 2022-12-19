#include "Led.h"
#include "Arduino.h"

Led::Led(int isiPinLed) {
  pinLed = isiPinLed;
  pinMode(pinLed, OUTPUT);
}

void Led::ON() {
  digitalWrite(pinLed, HIGH);
}

void Led::OFF() {
  digitalWrite(pinLed, LOW);
}