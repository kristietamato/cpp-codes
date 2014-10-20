//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 10 then prints these data.

#include <iostream>
#include <string>
using namespace std;

int const INCHES_IN_FOOT = 12;
int const TOTAL_INPUTS = 10;

// function prototypes
void runStuff(void);
void inputPerson1(string &name, int &inches);
float calculateInchesToFeet(int inches, float feet);
float calculateAverageHeight(int sumOfHeights_Inches, int TOTAL_INPUTS);
void outputDataTable(int inches, float feet);
void outputAverageHeight_Inches(float averageHeight_Inches);
void pause(void);
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
        pause();
        return exceptionValue;
    }
    pause();
    return 0;
}

void runStuff(void)
{
    string name;
    int inches;

    inputPerson1(string name, int inches);

    float feet;
    feet = calculateInchesToFeet(5, INCHES_IN_FOOT);
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

float calculateInchesToFeet(int inches, int INCHES_IN_FOOT)
{
    float feet;
    feet = inches / INCHES_IN_FOOT;
    return feet;
}

float calculateAverageHeight(int sumOfHeights_Inches, int TOTAL_INPUTS)
{
    float averageHeight_Inches;
    averageHeight_Inches = sumOfHeights_Inches / TOTAL_INPUTS;
    return averageHeight_Inches;
}

void outputAverageHeight_Inches(float averageHeight_Inches)
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