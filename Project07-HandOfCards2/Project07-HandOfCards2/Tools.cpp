//  Tools.cpp

#include "Tools.h"
#include "Play.h"

#include<iostream>
#include<string>
using namespace std;

// 1.2 format check
void formatCheck(void)
{
    if ( cin.fail() )
    {
        cin.clear();
        cin.ignore(999,'\n');
        cout << "Input format error. Press ENTER to terminate: ";
        cin.ignore(999,'\n');
        throw 1;
    }
}

void rangeCheck( int card1, int card2, int card3 )
{
    if ( card1 < MIN_CARD_NORMAL_VALUE || card1 > MAX_CARD_NORMAL_VALUE
        || card2 < MIN_CARD_NORMAL_VALUE || card2 > MAX_CARD_NORMAL_VALUE
        || card3 < MIN_CARD_NORMAL_VALUE || card3 > MAX_CARD_NORMAL_VALUE )
    {
        cout << "Input range error. Press ENTER to terminate: ";
        cin.ignore(999,'\n');
        throw 1;
    }
}

void pause(void)
{
    
}
