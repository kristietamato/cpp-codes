//  Tools.h

#ifndef TOOLS_LOCK
#define TOOLS_LOCK
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

#endif
