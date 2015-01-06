//  Created by Kristie Nguyen on 11/15/14.
//  main.cpp

#include "testStopwatch.h"
#include "Stopwatch.h"
#include <iostream>
using namespace std;

int main(void)
{
    try
    {
        testStopwatch();
    }
    catch (int exceptionValue)
    {
        cin.ignore(999,'\n');
        cout << endl;
        cout << "Unhandled Instruction" << endl;
        cout << "Program terminating by exception. ";
        cout << "Press ENTER to continue...";
        cin.ignore(999,'\n');
        return exceptionValue;
    }
    cout << "Press ENTER to continue...";
    cin.ignore(999,'\n');
    return 0;
}