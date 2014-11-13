//  Span.h

#include <iostream>
#include <string>
using namespace std;

#ifndef SPAN_LOCK
#define SPAN_LOCK

class Span
{
public:

    Span(string unit, double length);

    void setUnit(string unit);

    void setLength( double length);

    string getUnit();

    double getLength();

    double getLengthInches();

    double getLengthFeet();

    double getLengthYards();

    void increaseSpan(Span span);

private:
    string unitType;
    double unitLength;
    double unitLength_Inches;
    double unitLength_Feet;
    double unitLength_Yards;
    int factor;

    void convertSpan(void);
};

#endif
