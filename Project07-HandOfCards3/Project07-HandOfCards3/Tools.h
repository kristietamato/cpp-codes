//
//  Tools.h

#ifndef __Project07_HandOfCards3__Tools__
#define __Project07_HandOfCards3__Tools__
#include <string>
using namespace std;

// input range
const int MIN_CARD_NORMAL_VALUE		= 1;
const int MAX_CARD_NORMAL_VALUE		= 13;

void getInt( int &card1, int &card2, int &card3 );
void flushInput(void);
void pause(void);
void processError(int result, string message);
void finishStreamInput(void);
void checkInputSuccess(void);

#endif /* defined(__Project07_HandOfCards3__Tools__) */
