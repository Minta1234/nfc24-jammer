#ifndef setting_H
#define setting_H

#include <BLEDevice.h>
#include <U8g2lib.h>
#include <Adafruit_NeoPixel.h>

extern bool neoPixelActive;

void settingSetup();
void settingLoop();

#endif
