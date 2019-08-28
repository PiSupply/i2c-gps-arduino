#include "Arduino.h"
#include "Pisupply_GPS.h"


Pisupply_GPS::Pisupply_GPS() {

}

float Pisupply_GPS::getLongitude(void) {
  union {
   float fval;
   byte bval[4];
} floatAsBytes;

 // put your main code here, to run repeatedly:

 Wire.beginTransmission(0x42);
 Wire.write(0x01);
 Wire.requestFrom(0x42,6);

 int index = 0;

 while(Wire.available())    // slave may send less than requested
 {

    floatAsBytes.bval[index++] = Wire.read();    // receive a byte as character

 }


 Wire.endTransmission();

 return floatAsBytes.fval;
}

float Pisupply_GPS::getLatitude(void) {
  union {
   float fval;
   byte bval[4];
} floatAsBytes;

 // put your main code here, to run repeatedly:

 Wire.beginTransmission(0x42);
 Wire.write(0x02);
 Wire.requestFrom(0x42,6);

 int index = 0;

 while(Wire.available())    // slave may send less than requested
 {

    floatAsBytes.bval[index++] = Wire.read();    // receive a byte as character

 }


 Wire.endTransmission();

 return floatAsBytes.fval;
}


float Pisupply_GPS::getAltitude(void) {
  union {
   float fval;
   byte bval[4];
} floatAsBytes;

 // put your main code here, to run repeatedly:

 Wire.beginTransmission(0x42);
 Wire.write(0x03);
 Wire.requestFrom(0x42,6);

 int index = 0;

 while(Wire.available())    // slave may send less than requested
 {

    floatAsBytes.bval[index++] = Wire.read();    // receive a byte as character

 }


 Wire.endTransmission();

 return floatAsBytes.fval;
}
