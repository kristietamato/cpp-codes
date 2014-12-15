//  testStopwatch.cpp

#include "testStopwatch.h"
#include "Stopwatch.h"
#include <iostream>
#include <string>
using namespace std;


void testStopwatch(void)
{
    string choice;
    Stopwatch stopwatch;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    choice = getAndCheckInput();
    doChoice(choice, stopwatch);
    cout << endl;

    cout << "That's all, folks!" << endl;
}

// gets input and checks user input for "quit"
string getAndCheckInput(void)
{
    cout << "Enter \"toggle\", \"split\", \"reset\", \"status\" or \"quit\": ";
    string userInput;
    cin >> userInput;
    if (userInput != "quit")
    {
        return userInput;
    }
    else
    {
        exit(0);
    }
}

// executes functions based on choice
void doChoice(string choice, Stopwatch &stopwatch)
{

    if (choice == "toggle")
    {
        if (stopwatch.isRunning())
        {
            stopwatch.toggle();
            cout << "Stopwatch stopped at " << stopwatch.split() << " seconds." << endl;
        }
        else
        {
            cout << "Stopwatch started." << endl;
            stopwatch.toggle();
        }
    }
    else if (choice == "split")
    {
        cout << "Elapsed time is " << stopwatch.split() << " seconds." << endl;
    }
    else if (choice == "reset")
    {
        stopwatch.reset();
        cout << "Stopwatch reset." << endl;
    }
    else if (choice == "status")
    {
        if (stopwatch.isRunning())
        {
            cout << "Stopwatch is running." << endl;
            cout << "Elapsed time is " << stopwatch.split() << " seconds." << endl;
        }
        else
        {
            cout << "Stopwatch is not running." << endl;
            cout << "Elapsed time is " << stopwatch.split() << " seconds." << endl;
        }
    }
    // catch invalid input
    else
    {
        throw 1;
    }
}