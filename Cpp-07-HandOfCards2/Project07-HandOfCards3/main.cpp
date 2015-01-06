// Created by Kristie Nguyen on 10/23/2014.
// Homework 07
// Evaluating and comparing 2 poker hands.

// main.cpp

#include "CardHand.h"
#include "Tools.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    int hand1_card1, hand1_card2, hand1_card3;
    int hand2_card1, hand2_card2, hand2_card3;
    try
    {
        CardHand hand1;
        CardHand hand2;
        cout << "First Hand: ";
        getInt(hand1_card1, hand1_card2, hand1_card3);
        cout << "Second Hand: ";
        getInt(hand2_card1, hand2_card2, hand2_card3);
        hand1.set_hand(hand1_card1, hand1_card2, hand1_card3);
        hand2.set_hand(hand2_card1, hand2_card2, hand2_card3);
        if(hand1.hand_as_int() > hand2.hand_as_int())
        {
            // hand1 is better
            cout << endl;
            hand1.what_do_i_have();
            cout << " beats ";
            hand2.what_do_i_have();
            cout << "." << endl;
        }
        else
        {
            cout << endl;
            // hand2 is better
            hand2.what_do_i_have();
            cout << " beats ";
            hand1.what_do_i_have();
            cout << "." << endl;
        }
    }
    catch ( int exceptionValue )
    {
        cout << "Something went wrong." << endl;
        pause();
        return exceptionValue;
    }

    // finish up
    cout << endl;
    pause();
    return 0;
}