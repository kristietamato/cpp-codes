//  Tools.cpp

#include"Tools.h"

#include<iostream>
#include<string>
using namespace std;

void pause(void)
{
    cout << "Press ENTER to continue...";
    cin.ignore(999,'\n');
}

void checkInputSuccess(string unit)
{
    if ( unit != "inches" && unit != "inch" &&
        unit != "feet" && unit != "foot" &&
        unit != "yards" && unit != "yard")
    {
        cin.clear();
        flushInput();
        throw 1;
    }
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}

string getUnitType(string unit)
{
    if (unit == "inches" || unit == "inch")
    {
        return "inches";
    }
    if (unit == "feet" || unit == "foot")
    {
        return "feet";
    }
    if (unit == "yards" || unit == "yard")
    {
        return "yards";
    }
    else
    {
        throw 1;
    }
}
