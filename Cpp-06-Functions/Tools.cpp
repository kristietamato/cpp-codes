//  Tools.cpp
//  Created by Kristie Nguyen on 10/21/14.

#include "Tools.h"
#include <iostream>
#include <string>
using namespace std;

void pause_program(void)
{
    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}

void ifCinFail(void)
{
    if (cin.fail())
    {
        cin.clear();
        flushInput();
        cout << "Improper data." << endl;
        throw 1;
    }
}

string getName(string prompt)
{
    cout << prompt;
    string userInput;
    cin >> userInput;
    flushInput();
    ifCinFail();
    return userInput;
}

int getNonegativeInches(string prompt)
{
    cout << prompt;
    int userInput;
    cin >> userInput;
    flushInput();
    ifCinFail();
    if (userInput <= 0)
    {
        cout << endl;
        cout << "That's not a real height!" << endl;
        throw 2;
    }
    return userInput;
}