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
        getInt(hand1_card1, hand1_card2, hand1_card3);
        getInt(hand2_card1, hand2_card2, hand2_card3);
        hand1.set_hand(hand1_card1, hand1_card2, hand1_card3);
        hand2.set_hand(hand2_card1, hand2_card2, hand2_card3);
        if(hand1.hand_as_int() > hand2.hand_as_int())
        {
            //hand1 is better
            cout << "Hand 1 wins!" << endl;
            hand1.what_do_i_have();
        }
        else
        {
            //hand2 is better
            cout << "Hand 2 wins!" << endl;
            hand2.what_do_i_have();
        }
        // hand1.set_hand(3, 4, 5);
        // hand2.set_hand(2, 2, 1);
        // hand1.what_do_i_have();
        // cout << hand1.hand_as_int() << endl;
        // hand2.what_do_i_have();
        // cout << hand2.hand_as_int() << endl;
    }
    catch ( int exceptionValue )
    {
        cout << "Something went wrong." << endl;
        cout << "Press ENTER to close.";
        cin.ignore(999,'\n');
        return exceptionValue;
    }

    // finish up
    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    return 0;
}