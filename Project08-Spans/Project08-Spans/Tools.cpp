//  Tools.cpp

#include"Tools.h"

#include<iostream>
#include<string>
using namespace std;

void pause(void)
{
    cout << "Press ENTER to close.";
    cin.ignore(999,'\n');
}

void checkInputSuccess(void)
{
    if ( cin.fail() )
    {
        cin.clear();
        flushInput();
        error( "Input Failure." );
    }
}

void error( string message )
{
    cout << message << endl;
    pause();
    throw 1;
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}