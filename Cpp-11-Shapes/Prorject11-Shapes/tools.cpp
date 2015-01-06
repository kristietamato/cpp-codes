// tools.cpp

#include"tools.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const int SCREEN_WIDTH = 80;

int getBoundedInt( string prompt )
{
    int userInput;
    while ( true )
    {
        cout << prompt;
        cin >> userInput;
        if ( !cin.fail() )
        {
            if (userInput < 0 || userInput > 12)
            {
                cout << "Value out of range. Should be in range [0,12]. Try again." << endl;
                cout << endl;
                continue;
            }
            else
            {
                break;
            }
        }
        cin.clear();
        flushInput();
        cout << "Bad integer format. Try again." << endl;
        cout << endl;
    }
    return userInput;
}

int getBoundedSize( string prompt )
{
    int userInput;
    while ( true )
    {
        cout << prompt;
        cin >> userInput;
        if ( !cin.fail() )
        {
            if (userInput < 1 || userInput > SCREEN_WIDTH)
            {
                cout << "Size out of range or is negative. Try again." << endl;
                cout << endl;
                continue;
            }
            else
            {
                break;
            }
        }
        cin.clear();
        flushInput();
        cout << "Bad integer format. Try again." << endl;
        cout << endl;
    }
    return userInput;
}

bool getBool(string prompt)
{
    while (true)
    {
        char userAnswer = getChar(prompt);
        switch ( userAnswer )
        {
            case 'y': case 'Y': return true;
            case 'n': case 'N': return false;
        }
        cout << "Please answer y or n." << endl;
    }
}

char getChar(string prompt)
{
    while ( true )
    {
        char userInput;
        cout << prompt;
        cin >> userInput;
        flushInput();
        if ( !cin.fail() ) return userInput;
        cin.clear();
        flushInput();
        cout << "Data format error: Try again." << endl;
    }
}

void pause(void)
{
    cout << "Press ENTER to continue...";
    cin.ignore(999,'\n');
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}