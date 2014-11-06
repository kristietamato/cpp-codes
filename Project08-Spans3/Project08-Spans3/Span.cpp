//  Span.cpp

#include "Span.h"
#include"Tools.h"

#include <string>
#include<iostream>
using namespace std;

Span::Span(string unit, int length)
{
    setUnit(unit);
    setLength(length);
}

void Span::setUnit(string unit)
{
    if (unit == "inches" || unit == "inch")
    {
        unitType = "inches";
    }
    else if (unit == "feet" || unit == "foot")
    {
        unitType = "feet";
    }
    else if (unit == "yards" || unit == "yard")
    {
        unitType = "yards";
    }
    else
    {
        error("Error. Invalid input.");
    }
}

void Span::setLength(int length)
{
    unitLength = length;
}

string Span::getUnit()
{
    return unitType;
}

int Span::getLength()
{
    return unitLength;
}

void Span::convertSpan(void)
{

}

void Span::displaySpan(void)
{
    cout << "span is " << unitLength << " " << getUnit() << " or " << endl;
    cout << endl;
}