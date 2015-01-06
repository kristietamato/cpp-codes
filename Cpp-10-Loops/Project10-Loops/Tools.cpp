// Tools.cpp

#include"Tools.h"
#include<iostream>
#include<string>
using namespace std;

// return true if there is a 7 in any digit of a given number
bool sevenInDigit(int number)
{
    int yesSeven = 0;
    while (number > 0)
    {
        int digit;
        digit = number % 10;
        number = number / 10;
        if (digit == 7)
        {
            ++yesSeven;
        }
    }
    return yesSeven > 0;
}

void printNumbers(int &interesting_count, int &number)
{
    cout << "The ";
    if (interesting_count == 7)
    {
        cout << "first";
    }
    else
    {
        cout << "next";
    }
    cout << " really interesting number is " << number << endl;
    cout << "It is the " << interesting_count << "th interesting number." << endl;
    cout << endl;
}

int getNonNegativeInt( string prompt )
{
    int userInput;
	while ( true )
	{
		cout << prompt;
		cin >> userInput;
        if ( !cin.fail() )
        {
            if (userInput < 0)
            {
                cout << "Error: Negative value. Please try again." << endl;
                continue; // goes to beginning of while loop
            }
            else
            {
                break; // breaks out of while loop
            }
        }
		cin.clear();
		flushInput();
		cout << "Non-numeric input. Please try again." << endl;
	}
    return userInput;
}

void pause(void)
{
	cout << "Press ENTER to continue...";
	cin.ignore(999,'\n');
}

void flushInput(void)
{
	cin.ignore(999,'\n');
}