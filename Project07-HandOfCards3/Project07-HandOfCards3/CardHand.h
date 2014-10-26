//  CardHand.h

#ifndef __Project07_HandOfCards3__CardHand__
#define __Project07_HandOfCards3__CardHand__

#include <string>
using namespace std;

class CardHand
{
private:
    int card1, card2, card3;
    bool is3OfAKind, isSimpleStraight, isStraightWithAceLow, isStraight, isPair;
    int keyCard;
    string keyCardName;
    string keyCardNameArticle;
    string keyCardNamePlural;

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

public:
    void what_do_i_have(void);
    int hand_as_int(void);
    void set_hand(int, int, int);
};

#endif /* defined(__Project07_HandOfCards3__CardHand__) */
