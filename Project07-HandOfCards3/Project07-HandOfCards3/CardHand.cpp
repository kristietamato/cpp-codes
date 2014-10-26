//
//  CardHand.cpp
//  Project07-HandOfCards3
//
//  Created by Kristie Nguyen on 10/25/14.
//  Copyright (c) 2014 Kristie Nguyen. All rights reserved.
//

#include "CardHand.h"
#include <string>
#include <iostream>
using namespace std;

void CardHand::what_do_i_have()
{
    // output hand evaluation
    cout << endl;
    cout << "You have ";
    if		( is3OfAKind )	cout << "three " << keyCardName << keyCardNamePlural << '.';
    else if	( isStraight )	cout << keyCardNameArticle << ' ' << keyCardName << "-high straight.";
    else if ( isPair )		cout << "a pair of " << keyCardName << keyCardNamePlural << ".";
    else					cout << keyCardNameArticle << ' ' << keyCardName << '.';
    cout << endl;
}

int CardHand::hand_as_int()
{
    if ( is3OfAKind )
    {
        return 300 + card1 + card2 + card3;
    }
    else if ( isStraight )
    {
        if ( isStraightWithAceLow )
        {
            return 206; // 200 + aces low 1 + 2 + 3
        }
        else
        {
            return 200 + card1 + card2 + card3;
        }
    }
    else if ( isPair)
    {
        if ( card1 == card2 )
        {
            return 100 + card1 + card2;
        }
        else if ( card2 == card3 )
        {
            return 100 + card2 + card3;
        }
        else
        {
            return 100 + card1 + card3;
        }
    }
    else
    {
        return keyCard;
    }

}


void CardHand::set_hand(int cardA, int cardB, int cardC)
{
    card1 = cardA;
    card2 = cardB;
    card3 = cardC;

    // Adjust aces from low to high cards
    // (makes things much easier later)
    if ( card1 == ACE_LOW_VALUE ) card1 = ACE_HIGH_VALUE;
    if ( card2 == ACE_LOW_VALUE ) card2 = ACE_HIGH_VALUE;
    if ( card3 == ACE_LOW_VALUE ) card3 = ACE_HIGH_VALUE;

    // sort cards
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

    // determine which hand type(s) apply
    // (these look for a given hand criteria only - higher hands may exist)
    is3OfAKind = card1 == card3;
    isSimpleStraight = card2 == card1+1 && card3 == card2+1;
    isStraightWithAceLow = card3 == ACE_HIGH_VALUE
        && card1 == ACE_LOW_VALUE+1
        && card2 == card1+1;
    isStraight = isSimpleStraight || isStraightWithAceLow;
    isPair = card1 == card2 || card2 == card3;

    // Key Card
    // Most significant card of hand.

    // choose
    if ( is3OfAKind )					keyCard = card3; // high card
    else if ( isStraightWithAceLow )	keyCard = card2; // end of straight
    else if ( isStraight )				keyCard = card3; // end of straight
    else if ( isPair )					keyCard = card2; // value of pair cards
    else								keyCard = card3; // high card

    // name
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

    // english support

    // article
    if ( keyCardName == ACE_NAME || keyCardName == NUMBER_8_NAME )
        keyCardNameArticle = "an";
    else
        keyCardNameArticle = "a";

    // pluralization
    if ( keyCardName == NUMBER_6_NAME )
        keyCardNamePlural = "es";
    else
        keyCardNamePlural = "s";
}