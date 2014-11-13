//  Span.cpp

#include "Span.h"
#include"Tools.h"

#include <string>
#include<iostream>
using namespace std;

const int INCH_TO_FOOT_FACTOR = 12;
const int INCH_TO_YARD_FACTOR = 36;
const int FOOT_TO_YARD_FACTOR = 3;

Span::Span(string unit, double length)
{
    setUnit(unit);
    setLength(length);
}
// set unitType to only inches, feet, or yards
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
        throw 1;
    }
}

void Span::setLength(double length)
{
    unitLength = length;
    convertSpan();
}

string Span::getUnit()
{
    return unitType;
}

double Span::getLength()
{
    return unitLength;
}

double Span::getLengthInches()
{
    return unitLength_Inches;
}

double Span::getLengthFeet()
{
    return unitLength_Feet;
}

double Span::getLengthYards()
{
    return unitLength_Yards;
}

void Span::convertSpan(void)
{
    if (unitType == "inches")
    {
        unitLength_Inches = unitLength;
        unitLength_Feet = unitLength/INCH_TO_FOOT_FACTOR;
        unitLength_Yards = double(unitLength)/INCH_TO_YARD_FACTOR;
    }
    else if (unitType == "feet")
    {
        unitLength_Feet = unitLength;
        unitLength_Inches = unitLength * INCH_TO_FOOT_FACTOR;
        unitLength_Yards = double(unitLength)/FOOT_TO_YARD_FACTOR;
    }
    else
    {
        unitLength_Yards = double(unitLength);
        unitLength_Feet = unitLength * FOOT_TO_YARD_FACTOR;
        unitLength_Inches = unitLength * INCH_TO_YARD_FACTOR;
    }
}

void Span::increaseSpan(Span span)
{
    if (unitType == "inches")
    {
        setLength(unitLength_Inches + span.getLengthInches());
    }
    else if (unitType == "feet")
    {
        setLength(unitLength_Feet + span.getLengthFeet());
    }
    else
    {
        setLength(unitLength_Yards+ span.getLengthYards());
    }
}