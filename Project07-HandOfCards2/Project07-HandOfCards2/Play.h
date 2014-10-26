//  Play.h

#include<string>
using namespace std;

// numberic values of cards
const int ACE_LOW_VALUE				= 1;
const int MIN_NON_FACE_CARD_VALUE	= 2;
const int MAX_NON_FACE_CARD_VALUE	= 10;
const int JACK_VALUE				= 11;
const int QUEEN_VALUE				= 12;
const int KING_VALUE				= 13;
const int ACE_HIGH_VALUE			= 14;

// face card names
const string JACK_NAME		= "jack";
const string QUEEN_NAME		= "queen";
const string KING_NAME		= "king";
const string ACE_NAME		= "ace";

// non-face card (number) names
const string NUMBER_2_NAME	= "two";
const string NUMBER_3_NAME	= "three";
const string NUMBER_4_NAME	= "four";
const string NUMBER_5_NAME	= "five";
const string NUMBER_6_NAME	= "six";
const string NUMBER_7_NAME	= "seven";
const string NUMBER_8_NAME	= "eight";
const string NUMBER_9_NAME	= "nine";
const string NUMBER_10_NAME	= "ten";

#ifndef PLAY_LOCK
#define PLAY_LOCK

void Play(void);
void inputCards( int card1, int card2, int card3 );
void adjustAces( int card1, int card2, int card3 );
void sortCards ( int card1, int card2, int card3 );
void handTypes( int card1, int card2, int card3 );
void chooseKeyCard( bool is3OfAKind, bool isStraightWithAceLow,
                   bool isStraight, bool isPair, int card2, int card3 );
void keyCardName( int keyCard );
void keyCardArticle( string keyCardName );
void keyCardPlural( string keyCardName );
void outputEvaluation( bool is3OfAKind, bool isStraight, bool isPair );

#endif