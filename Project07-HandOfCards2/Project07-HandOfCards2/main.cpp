// Created by Kristie Nguyen on 10/23/2014.
// Homework 07
// Evaluating and comparing 2 poker hands.

// Main.cpp

#include "Tools.h"
#include "Play.h"

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    try
    {
        Play();
    }
    catch ( int exceptionValue )
    {
        cout << "dying now..." <<endl;
        cout << "Press ENTER to finish...";
        cin.ignore(999,'\n');
        return exceptionValue;
    }
    
    // 4 finish up
    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    return 0;
}