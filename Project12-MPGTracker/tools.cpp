// tools.cpp

#include"tools.h"

#include<iostream>
#include<string>
using namespace std;

void outputLine(void)
{
    cout << endl;
}

void checkInputSuccess(void)
{
    if ( cin.fail() )
    {
        cin.clear();
        flushInput();
        error("didn't work");
    }
}

void finishStreamInput(void)
{
    flushInput();
    checkInputSuccess();
}

int getInt( string prompt )
{
    while ( true )
    {
        int userInput;
        cout << prompt;
        cin >> userInput;
        flushInput();
        if ( !cin.fail() ) return userInput;
        cin.clear();
        flushInput();
        cout << "Data format error: Try again." << endl;
    }

    // if break used: return userInput;
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

float getFloat(string prompt)
{
    while ( true )
    {
        float userInput;
        cout << prompt;
        cin >> userInput;
        flushInput();
        if ( !cin.fail() ) return userInput;
        cin.clear();
        flushInput();
        cout << "Data format error: Try again." << endl;
    }
}

string getString(string prompt)
{
    while ( true )
    {
        string userInput;
        cout << prompt;
        cin >> userInput;
        flushInput();
        if ( !cin.fail() ) return userInput;
        cin.clear();
        flushInput();
        cout << "Data format error: Try again." << endl;
    }
}

string getLine(string prompt)
{
    while ( true )
    {
        string userInput;
        cout << prompt;
        getline(cin,userInput);
        //flushInput();
        if ( !cin.fail() ) return userInput;
        cin.clear();
        flushInput();
        cout << "Data format error: Try again." << endl;
    }
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

void error( string message )
{
    cout << message << endl;
    pause();
    throw 1;
}

int getNonNegativeInt( string prompt )
{
    return getBoundedInt(prompt, 0, INT_MAX);
}

int getPositiveInt( string prompt )
{
    return getBoundedInt(prompt, 1, INT_MAX);
}

int getPercent( string prompt )
{
    return getBoundedInt(prompt, 0, 100);
}

int getBoundedInt(string prompt, int lowBound, int highBound)
{
    while (true)
    {
        int userInput = getInt(prompt);
        if ( userInput >= lowBound && userInput <= highBound )
            return userInput;
        cout << "Data must be in range ["
        << lowBound
        << "..."
        << highBound
        << "]. Try again." <<endl;
    }
}

float calculateRectangleArea(float width, float length)
{
    return width * length;
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

int max( int a, int b )
{
    if ( a > b )	return a;
    else			return b;
}

int width( int a )
{
    bool isNegative = a < 0;
    if ( isNegative ) a = -a;
    
    int digitCount = 0;
    for ( int digits = a ; digits >= 10 ; digits = digits/10 )
        ++digitCount;
    ++digitCount; // for the final digit
    
    if ( isNegative )	return digitCount + 1; // for the sign
    else				return digitCount;
}
