/*
 * Project: Example usage of the Layad Circuits' Seven Segment Library using 2 digits of common anode
 * Revision: 1.0 - 26 July 2016, initial creation  
 * Author/Comments/Suggestions: chris@layadcircuits.com
 * www.layadcircuits.com
 */

#include <layadcircuits_7segment.h>

layadcircuits_7segment digit1; // ones
layadcircuits_7segment digit2; // tens

void setup()
{
  digit1.begin(COMMON_CATHODE,2,3,4,5,6,7,8,9);
  digit2.begin(COMMON_CATHODE,10,11,12,A0,A1,A2,A3,A4);
}

void loop()
{
  for(byte i=0;i<=99;i++) // display 0-99
  {
    digit1.displayWrite(i%10,false);
    digit2.displayWrite(i/10,false);
    delay(300);
  }
}