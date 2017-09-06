/*




*/
#ifndef LAYADCIRCUITS_7SEGMENT
#define LAYADCIRCUITS_7SEGMENT

#include "Arduino.h"

#define COMMON_ANODE false
#define COMMON_CATHODE true

class layadcircuits_7segment
{
  public:
    void begin(bool cc, uint8_t pinA,uint8_t pinB,uint8_t pinC,uint8_t pinD,uint8_t pinE,uint8_t pinF,uint8_t pinG);
    void displayWrite(byte num);
    byte displayRead();
  private:
    byte pinsSegment[7];
    bool flagCC;
};

#endif