//  Play.cpp

#include "Play.h"
#include"Tools.h"
#include<iostream>
#include<string>
using namespace std;

void Play(void)
{
    // 1 Input hand

    // 1.1 basic input
    int card1, card2, card3;
    inputCards( card1, card2, card3 );

    // 2 process

    // 2.1 Adjust aces from low to high cards
    adjustAces( card1, card2, card3 );

    // 2.2 sort cards
    sortCards( card1, card2, card3 );

    // 2.3 determine which hand type(s) apply
    bool is3OfAKind = card1 == card3;
    bool isSimpleStraight = card2 == card1+1 && card3 == card2+1;
    bool isStraightWithAceLow = card3 == ACE_HIGH_VALUE
    && card1 == ACE_LOW_VALUE+1
    && card2 == card1+1;
    bool isStraight = isSimpleStraight || isStraightWithAceLow;
    bool isPair = card1 == card2 || card2 == card3;

    // 2.4 Key Card. Most significant card of hand.

    // 2.4.1 choose
    chooseKeyCard( is3OfAKind, isStraightWithAceLow,
                  isStraight, isPair, card2, card3 );

    // 2.4.2 name
     keyCardName( keyCard );

    keyCardArticle( keyCardName );
    keyCardPlural( keyCardName );

    outputEvaluation( is3OfAKind, isStraight, isPair );
}

void inputCards( int card1, int card2, int card3 )
{
    cout << "Enter three cards in the range "
    << MIN_CARD_NORMAL_VALUE
    << " to "
    << MAX_CARD_NORMAL_VALUE
    << ", separated by spaces: ";
    cin >> card1 >> card2 >> card3;
    cin.ignore(999,'\n');
    formatCheck();
    rangeCheck( card1, card2, card3 );
}

void adjustAces( int card1, int card2, int card3 )
{
    if ( card1 == ACE_LOW_VALUE ) card1 = ACE_HIGH_VALUE;
    if ( card2 == ACE_LOW_VALUE ) card2 = ACE_HIGH_VALUE;
    if ( card3 == ACE_LOW_VALUE ) card3 = ACE_HIGH_VALUE;
}

void sortCards ( int card1, int card2, int card3 )
{
    if ( card1 > card2 )
    {
        int temp = card1;
        card1 = card2;
        card2 = temp;
    }
    if ( card2 > card3 )
    {
        int temp = card2;
        card2 = card3;
        card3 = temp;
    }
    if ( card1 > card2 )
    {
        int temp = card1;
        card1 = card2;
        card2 = temp;
    }
}

// 2.4 Key Card
// Most significant card of hand.

// 2.4.1 choose
void chooseKeyCard( bool is3OfAKind, bool isStraightWithAceLow,
                   bool isStraight, bool isPair, int card2, int card3 )
{
    int keyCard;
    if ( is3OfAKind )					keyCard = card3; // high card
    else if ( isStraightWithAceLow )	keyCard = card2; // end of straight
    else if ( isStraight )				keyCard = card3; // end of straight
    else if ( isPair )					keyCard = card2; // value of pair cards
    else								keyCard = card3; // high card
}

// 2.4.2 name
void keyCardName( int keyCard )
{
    string keyCardName;
    if		( keyCard == 2 )				keyCardName = NUMBER_2_NAME;
    else if ( keyCard == 3 )				keyCardName = NUMBER_3_NAME;
    else if ( keyCard == 4 )				keyCardName = NUMBER_4_NAME;
    else if ( keyCard == 5 )				keyCardName = NUMBER_5_NAME;
    else if ( keyCard == 6 )				keyCardName = NUMBER_6_NAME;
    else if ( keyCard == 7 )				keyCardName = NUMBER_7_NAME;
    else if ( keyCard == 8 )				keyCardName = NUMBER_8_NAME;
    else if ( keyCard == 9 )				keyCardName = NUMBER_9_NAME;
    else if ( keyCard == 10 )				keyCardName = NUMBER_10_NAME;
    else if ( keyCard == JACK_VALUE )		keyCardName = JACK_NAME;
    else if ( keyCard == QUEEN_VALUE )		keyCardName = QUEEN_NAME;
    else if ( keyCard == KING_VALUE )		keyCardName = KING_NAME;
    else if ( keyCard == ACE_HIGH_VALUE )	keyCardName = ACE_NAME;
    else									keyCardName = "error";
}

// 2.4.3 english support

// 2.4.3.1 article
void keyCardArticle( string keyCardName )
{
    string keyCardNameArticle;
    if ( keyCardName == ACE_NAME || keyCardName == NUMBER_8_NAME )
        keyCardNameArticle = "an";
    else
        keyCardNameArticle = "a";
}

// 2.4.3.2 pluralization
void keyCardPlural( string keyCardName )
{
    string keyCardNamePlural;
    if ( keyCardName == NUMBER_6_NAME )
        keyCardNamePlural = "es";
    else
        keyCardNamePlural = "s";
}

// 3 output hand evaluation
void outputEvaluation( bool is3OfAKind, bool isStraight, bool isPair )
{
    cout << endl;
    cout << "You have ";
    if		( is3OfAKind )	cout << "three " << keyCardName << keyCardNamePlural << '.';
    else if	( isStraight)	cout << keyCardNameArticle << ' ' << keyCardName << "-high straight.";
    else if ( isPair )		cout << "a pair of " << keyCardName << keyCardNamePlural << ".";
    else					cout << keyCardNameArticle << ' ' << keyCardName << '.';
    cout << endl;
}
