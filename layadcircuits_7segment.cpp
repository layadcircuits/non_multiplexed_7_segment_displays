/*
File: layadcircuits_7segment.cpp
Library: Seven Segment Driver library
Author/Comments/Suggestions: chris@layadcircuits.com
www.layadcircuits.com , Baguio City, Philippines
*/
#include <layadcircuits_7segment.h>

void layadcircuits_7segment::begin(bool cc, uint8_t pinA,uint8_t pinB,uint8_t pinC,uint8_t pinD,uint8_t pinE,uint8_t pinF,uint8_t pinG)
{
	flagCC = cc;
	pinsSegment[0] = pinA;
	pinsSegment[1] = pinB;
	pinsSegment[2] = pinC;
	pinsSegment[3] = pinD;
	pinsSegment[4] = pinE;
	pinsSegment[5] = pinF;
	pinsSegment[6] = pinG;

	for(byte i=0;i<7;i++)
	{
	  pinMode(pinsSegment[i],OUTPUT);
	  if(cc) digitalWrite(pinsSegment[i],LOW);
    else  digitalWrite(pinsSegment[i],HIGH);
	}
} 
            

void layadcircuits_7segment::displayWrite(byte num)
{
  bool segmenton, segmentoff;
  if(flagCC)
  {
  segmenton = HIGH;
  segmentoff = LOW;
  }
  else
  {
  segmenton = LOW;
  segmentoff = HIGH;
  }
 

  switch(num)
  {
     case 0:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmentoff);
    break;

     case 1:
	digitalWrite(pinsSegment[0],segmentoff);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmentoff);
    break;

     case 2:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmentoff);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 3:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 4:
	digitalWrite(pinsSegment[0],segmentoff);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 5:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 6:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 7:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmentoff);
    break;

     case 8:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 9:
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 10: // A
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 11: // b
	digitalWrite(pinsSegment[0],segmentoff);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 12: // C
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmentoff);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmentoff);
    break;

     case 13: // d
	digitalWrite(pinsSegment[0],segmentoff);
	digitalWrite(pinsSegment[1],segmenton);
	digitalWrite(pinsSegment[2],segmenton);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 14: // E
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmentoff);
	digitalWrite(pinsSegment[3],segmenton);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;

     case 15: // F
	digitalWrite(pinsSegment[0],segmenton);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmentoff);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmenton);
	digitalWrite(pinsSegment[5],segmenton);
	digitalWrite(pinsSegment[6],segmenton);
    break;


     default: // blank
	digitalWrite(pinsSegment[0],segmentoff);
	digitalWrite(pinsSegment[1],segmentoff);
	digitalWrite(pinsSegment[2],segmentoff);
	digitalWrite(pinsSegment[3],segmentoff);
	digitalWrite(pinsSegment[4],segmentoff);
	digitalWrite(pinsSegment[5],segmentoff);
	digitalWrite(pinsSegment[6],segmentoff);
    break;
  }
}