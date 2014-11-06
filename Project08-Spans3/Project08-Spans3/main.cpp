//  Created by Kristie Nguyen on 11/3/14.
//  Converts and sums inputs in inches, feet, or yards and displays output.
//  main.cpp

#include "Tools.h"
#include "Span.h"

#include <iostream>
using namespace std;

int main(void)
{
    string unit1;
    int length1;
    cout <<"Enter units of first span: ";
    cin >> unit1;
    cout << "Enter how many " << getUnitType(unit1) << " in the first span: ";
    cin >> length1;
    Span span1(unit1, length1);
    cout << endl;

    string unit2;
    int length2;
    cout <<"Enter units of second span: ";
    cin >> unit2;
    cout << "Enter how many " << getUnitType(unit2) << " in the second span: ";
    cin >> length2;
    Span span2(unit2, length2);
    cout << endl;

    cout << "First ";
    span1.convertSpan();
    cout << "span is " << span1.getLengthInches() << " inches or " << span1.getLengthFeet()
    << " feet or " <<  span1.getLengthYards() << " yards." << endl;
    cout << endl;
    cout << "Second ";
    span2.convertSpan();
    cout << "span is " << span2.getLengthInches() << " inches or " << span2.getLengthFeet()
    << " feet or " <<  span2.getLengthYards() << " yards." << endl;

    cout << "Sum span is " << span1.getLengthInches() + span2.getLengthInches() << " inches or "
         << span1.getLengthFeet() + span2.getLengthFeet() << " feet or "
         << span1.getLengthYards() + span2.getLengthYards()
         << " yards." << endl;
    cout << endl;

    pause();
    return 0;
}


/*
Class Span
    setUnit
    setLength
    getUnit
    getLength
    convertSpan
    sumSpans
    displaySpan
        display sum of span1 and span2 in inches, feet, yards
*/