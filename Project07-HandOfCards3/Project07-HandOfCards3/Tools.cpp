//  Tools.cpp

#include "Tools.h"
#include <string>
#include <iostream>
using namespace std;

void getInt(int &card1, int &card2, int &card3 )
{
    cout << "Enter three cards in the range "
        << MIN_CARD_NORMAL_VALUE
        << " to "
        << MAX_CARD_NORMAL_VALUE
        << ", separated by spaces: ";
    cin >> card1 >> card2 >> card3;
    finishStreamInput();

    // range check
    if ( card1 < MIN_CARD_NORMAL_VALUE || card1 > MAX_CARD_NORMAL_VALUE
        || card2 < MIN_CARD_NORMAL_VALUE || card2 > MAX_CARD_NORMAL_VALUE
        || card3 < MIN_CARD_NORMAL_VALUE || card3 > MAX_CARD_NORMAL_VALUE )
    {
        processError(1, "Input range error. Press ENTER to terminate:");
    }
}

void finishStreamInput(void)
{
    flushInput();
    checkInputSuccess();
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}

void checkInputSuccess(void)
{
    if ( cin.fail() )
    {
        cin.clear();
        flushInput();
        processError( 1, "Input Failure." );
    }
}

void processError(int result, string message)
{
    cout << endl;
    cout << message << endl;
    pause();
    throw result;
}

void pause(void)
{
    cout << "Press ENTER to continue...";
    cin.ignore(999,'\n');
}