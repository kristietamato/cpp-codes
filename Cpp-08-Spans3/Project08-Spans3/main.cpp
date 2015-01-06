//  Created by Kristie Nguyen on 11/3/14.
//  Converts and sums inputs in inches, feet, or yards and displays output.
//  main.cpp

#include "Tools.h"
#include "Span.h"

#include <iostream>
using namespace std;

int main(void)
{
    try
    {
        // get inputs
        // input for span1
        string unit1;
        double length1;
        cout <<"Enter units of first span: ";
        cin >> unit1;
        // check input format
        checkInputSuccess(unit1);
        cout << "Enter how many " << getUnitType(unit1) << " in the first span: ";
        cin >> length1;
        Span span1(unit1, length1);
        cout << endl;

        // input for span2
        string unit2;
        double length2;
        cout <<"Enter units of second span: ";
        cin >> unit2;
        // check input format
        checkInputSuccess(unit2);
        cout << "Enter how many " << getUnitType(unit2) << " in the second span: ";
        cin >> length2;
        Span span2(unit2, length2);
        cout << endl;

        // output span1 and span2 in inches, feet, and yards
        cout << "First ";
        cout << "span is " << span1.getLengthInches() << " inches or " << span1.getLengthFeet()
        << " feet or " <<  span1.getLengthYards() << " yards." << endl;
        cout << endl;
        cout << "Second ";
        cout << "span is " << span2.getLengthInches() << " inches or " << span2.getLengthFeet()
        << " feet or " <<  span2.getLengthYards() << " yards." << endl;
        cout << endl;

        // increase span1 by span2
        span1.increaseSpan(span2);

        // output the sums of span1 and span2 in inches, feet, and yards
        cout << "Sum span is " << span1.getLengthInches() << " inches or "
        << span1.getLengthFeet() << " feet or "
        << span1.getLengthYards() << " yards." << endl;
        cout << endl;

        // test invalid construct
        cout << "Constructing a Span with an unknown unit (\"meter\"): " << endl;
        cout << endl;
        Span span3("meter", 10);

    }
    catch (int returnValue)
    {
        cout << "Program terminating due to exception. ";
        pause();
        return returnValue;
    }

    // finish
    cout << endl;
    flushInput();
    pause();
    return 0;
}