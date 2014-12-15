//  runShape.cpp

#include "runShape.h"
#include "shape.h"
#include "tools.h"

#include <iomanip>
#include <iostream>
using namespace std;

void runShape(void)
{
    {
        int shapeInput = getBoundedInt("What shape do you want <0 for help>? ");
        if (shapeInput == 0)
        {
            printHelp();
            continue;
        }
        else
        {
            goToShape(shapeInput);
        }
        if (!getBool("Do you want to do another? ")) break;
    }
}

void printHelp(void)
{
    cout << "The choices are:" << endl;
    cout << " 1 Square" << endl;
    cout << " 2 Rectangle" << endl;
    cout << " 3 Triangle with right angle pointing southwest" << endl;
    cout << " 4 Triangle with right angle pointing southeast" << endl;
    cout << " 5 Triangle with right angle pointing northwest" << endl;
    cout << " 6 Triangle with right angle pointing northeast" << endl;
    cout << " 7 Triangle with right angle pointing north" << endl;
    cout << " 8 Triangle with right angle pointing east" << endl;
    cout << " 9 Triangle with right angle pointing west" << endl;
    cout << "10 Triangle with right angle pointing south" << endl;
    cout << "11 Diamond" << endl;
    cout << "12 Circle" << endl;
    cout << endl;
}

void goToShape(int shapeInput)
{
    int sizeInput = getBoundedSize("Please enter a size for the shape: ");
    bool fillInput = getBool("Do you want the shape solid? " );
    shape shape(sizeInput, fillInput, shapeInput);

    cout << endl;
    shape.printShape(shapeInput);
    cout << endl;
}