//  Span.h

#include <iostream>
#include <string>
using namespace std;

#ifndef SPAN_LOCK
#define SPAN_LOCK

class Span
{
public:

    Span(string unit, int length);

    void setUnit(string unit);

    void setLength(int length);

    string getUnit();

    int getLengthInches();

    int getLengthFeet();

    double getLengthYards();

    void increaseBy(string, int);

    void convertSpan(void);

private:
    string unitType;
    int unitLength;
    int unitLength_Inches;
    int unitLength_Feet;
    double unitLength_Yards;
    int factor;

};

#endif
