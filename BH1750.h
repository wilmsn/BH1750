/*
  a simple Arduino library for the BH1750 light sensor
*/
#ifndef _BH1750_h
#define _BH1750_h

#include "Arduino.h"
#include <Wire.h>

class BH1750 {
 private:
	uint8_t bh1750_i2c_address = 0x23;  // I2C address (ADD=L=0100011)

 public:
 
 BH1750(void);
 
 BH1750(uint8_t I2Caddress);
 
  /**
   * Begin operation of the chip
   * 
   * Call this in setup(), before calling any other methods.
   */
  void begin(void);

  /**
   * Reads Values from the chip
   * 
   * Call this to get the actual values.
   */

  float readLight(void);   

};  

#endif
