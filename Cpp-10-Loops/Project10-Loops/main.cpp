//  main.cpp
//  Created by Kristie Nguyen on 11/20/14.

#include "Tools.h"
#include <iostream>
using namespace std;

int main(void)
{
    int number = 0;
    int userSpecified_count;
    int interesting_count = 0;
    int reallyInteresting_count = 0;

    // get user input
    userSpecified_count = getNonNegativeInt("How many really interesting numbers would you like to see? ");

    // close program if user enters 0
    if (userSpecified_count == 0)
    {
        return 0;
    }
    cout << endl;

    while (true)
    {
        // find interesting numbers
        if (sevenInDigit(number))
        {
            // adds to interesting numbers (keeps track of interesting numbers)
            interesting_count++;

            // find really interesting numbers
            if (sevenInDigit(interesting_count))
            {
                // add to really interesting numbers (keeps track of really interesting numbers)
                reallyInteresting_count++;

                // print out interesting and really interesting numbers
                printNumbers(interesting_count, number);

                if (userSpecified_count == reallyInteresting_count)
                {
                    // user defined addional times to get really interesting numbers
                    int additionalNumbers = getNonNegativeInt("How many more really interesting numbers would you like to see? ");
                    cout << endl;

                    userSpecified_count = userSpecified_count + additionalNumbers;

                    // end while loop if user enters 0
                    if (additionalNumbers == 0)
                    {
                        break;
                    }
                }
            }
        }

        // increments positive ints to check for 7s
        number++;
    }
}