//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 10 then prints these data.

#include <iostream>
#include <string>
using namespace std;

int const INCHES_IN_FOOT = 12;
int const TOTAL_INPUTS = 10;

// function prototypes
void pause(void);
void inputPerson1(string &name, int &inches);
float calculateInchesToFeet(int inches, float feet);
float calculateAverageHeight_Inches(int inches);
void outputDataTable(int inches, float feet);
void outputAverageHeight(int averageHeight_Inches);
void flushInput(void);

int main(void)
{
    try
    {
        runStuff();
    }
    catch (int exceptionValue)
    {
        cout << "Datas out of bound. Program closing." << endl;
        pause()
        return exceptionValue;
    }
    pause();
    return 0;
}

int getInt(string prompt)
{
    cout << prompt;
    int userInput;
    cin >> userInput;
    flushInput();
    if (cin.fail())
    {
        cin.clear();
        flushInput();
        cout << "Improper data input." << endl;
        throw 1;
    }
    return userInput;
}

void inputPerson1(string &name, int &inches);
{
    name = getName("Enter name 01: ");
    inches = getInches("Enter height 01: ");
}
float calculateInchesToFeet(int inches, float feet)
{
    return feet = inches / INCHES_IN_FOOT;
}

float calculateAverageHeight(int inches)
{
    return averageHeight_Inches = sumOfHeights_Inches / TOTAL_INPUTS;
}

void outputAverageHeight(int averageHeight_Inches);
{
    cout << "Average height is " << averageHeight_Inches << "inches" << endl;
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