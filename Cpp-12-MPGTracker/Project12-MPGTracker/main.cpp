//  main.cpp
//  Project12-MPGTracker
//
//  Created by Kristie Nguyen on 12/10/14.
// A program that keeps track of your miles per gallon of fuel used (MPG).

#include "tools.h"
#include <iostream>
using namespace std;

int main(void)
{
    int miles;
    int gallons;
    double currentMPG = 0.0;
    double totalMPG = 0.0;

    while(true)
    {
        // get user input
        miles = getInt("Enter miles driven (-1 to quit): ");
        if (miles == -1)
        {
            break;
        }
        gallons = getInt("Enter gallons used: ");

        // process
        currentMPG = (double)miles/gallons;
        totalMPG = totalMPG + currentMPG;

        // output
        cout << "MPG this trip: " << currentMPG << endl;
        cout << "Total MPG: " << totalMPG << endl;
        cout << endl;
    }

    return 0;
}
