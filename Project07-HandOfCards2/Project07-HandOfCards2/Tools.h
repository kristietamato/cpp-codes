//  Tools.h

#include<iostream>
using namespace std;

// input range
const int MIN_CARD_NORMAL_VALUE	= 1;
const int MAX_CARD_NORMAL_VALUE	= 13;

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

void formatCheck(void);
void rangeCheck( int card1, int card2, int card3 );
void pause(void);

#endif