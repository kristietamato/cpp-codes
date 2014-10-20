//  Created by Kristie Nguyen on 10/20/14.
//  A program that converts height and gets its average out of 10 and prints this data.

#include <iostream>
#include <string>
using namespace std;

int const INCHES_IN_FOOT = 12;

// function prototypes
void pause(void);
void inputHeight_Inches(int inches);
float calculateInchesToFeet(int inches, float feet);
float calculateAverageHeight_Inches(int inches);
void outputDataTable(int inches, float feet);
void outputAverageHeight(float height);
void flushInput(void);

int main(void)
{


    return 0;
}

float calculateInchesToFeet(int inches, float feet)
{
    return feet = inches / INCHES_IN_FOOT;
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