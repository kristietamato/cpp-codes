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

    int getLength();

    void convertSpan(void);

    void displaySpan(void);

private:
    string unitType;
    int unitLength;
    int factor;

};

#endif
