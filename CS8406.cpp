#include <Arduino.h>
#include <Wire.h>
#include "CS8406.h"

CS8406::CS8406(const uint8_t address)
{
    _address = address;
}

void CS8406::begin()
{
  Serial.println("CS8406::begin()");

  // Configure CONTROL1 register
  Wire.beginTransmission(_address);
  Wire.write(CS8406_I2C_REGNUM_CONTROL1);
  Wire.write(CS8406_I2C_REGVAL_CONTROL1);
  Wire.endTransmission();

  // Configure CLOCKSRC register
  Wire.beginTransmission(_address);
  Wire.write(CS8406_I2C_REGNUM_CLOCKSRC);
  Wire.write(CS8406_I2C_REGVAL_CLOCKSRC);
  Wire.endTransmission();

  // Configure SERIALIN register
  Wire.beginTransmission(_address);
  Wire.write(CS8406_I2C_REGNUM_SERIALIN);
  Wire.write(CS8406_I2C_REGVAL_SERIALIN);
  Wire.endTransmission();
}
