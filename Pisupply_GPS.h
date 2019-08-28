/*
* Pi Supply I2C GPS Library
* By Ryan Walmsley
* (C) Nebra LTD. T/A Pi Supply
* V0.1
*

*/

#ifndef Pisupply_GPS_h
#define Pisupply_GPS_h

#include "Arduino.h"
#include "Wire.h"

#define I2C_ADDR 0x42

#define GPS_FIX_REG 0x00
#define GPS_LAT_REG 0x01
#define GPS_LON_REG 0x02
#define GPS_ALT_REG 0x03
#define GPS_HDOP_REG 0x04

class Pisupply_GPS
{

  public:
    Pisupply_GPS();
    float getLatitude(void);
    float getLongitude(void);
    float getAltitude(void);
    //float getHDOP(void);
    //boolean getFix(void);

};

#endif
