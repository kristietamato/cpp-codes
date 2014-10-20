//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 10 then prints these data.

#include <iostream>
#include <string>
using namespace std;

int const INCHES_IN_FOOT = 12;
int const TOTAL_INPUTS = 10;

// function prototypes
void runStuff(void);
void getInput(string &name, int &inches);
float calculateInchesToFeet(int inches, int INCHES_IN_FOOT);
float calculateSumOfHeights_Inches(int inches);
float calculateAverageHeight_Inches(int sumOfHeights_Inches, int TOTAL_INPUTS);
void outputDataTable(string name, int inches, float feet);
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
        cout << "Something went wrong. Program closing." << endl;
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
    float feet;

    getInput(name, inches);

    feet = calculateInchesToFeet(inches, INCHES_IN_FOOT);

    float sumOfHeights_Inches = calculateSumOfHeights_Inches(inches);

    float averageHeight_Inches = calculateAverageHeight_Inches(sumOfHeights_Inches, TOTAL_INPUTS);

    outputDataTable(name, inches, feet);

    outputAverageHeight_Inches(averageHeight_Inches);
}

void getInput(string &name, int &inches)
{
    cout << "Enter name 01: ";
    cin >> name;
    flushInput();
    if (cin.fail())
    {
        cin.clear();
        flushInput();
        cout << "Improper data input." << endl;
        pause();
        throw 1;
    }
    cout << "Enter height 01: ";
    cin >> inches;
    flushInput();
    if (cin.fail())
    {
        cin.clear();
        flushInput();
        cout << "Improper data input." << endl;
        pause();
        throw 1;
    }
}

float calculateInchesToFeet(int inches, int INCHES_IN_FOOT)
{
    float feet;
    feet = inches / INCHES_IN_FOOT;
    return feet;
}


float calculateSumOfHeights_Inches(int inches)
{
    float sumOfHeights_Inches;
    sumOfHeights_Inches = inches + inches;
    return sumOfHeights_Inches;
}

float calculateAverageHeight_Inches(int sumOfHeights_Inches, int TOTAL_INPUTS)
{
    float averageHeight_Inches;
    averageHeight_Inches = sumOfHeights_Inches / TOTAL_INPUTS;
    return averageHeight_Inches;
}

void outputDataTable(string name, int inches, float feet)
{
    cout << "Name" << "Inches" << "Feet" << endl;
    cout << endl;
    cout << name << inches << feet << endl;
}

void outputAverageHeight_Inches(float averageHeight_Inches)
{
    cout << "Average height is " << averageHeight_Inches << " inches." << endl;
}

void pause(void)
{
	cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
}

void flushInput(void)
{
    cin.ignore(999,'\n');
}