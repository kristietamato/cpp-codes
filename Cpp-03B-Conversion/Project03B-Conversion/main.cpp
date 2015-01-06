//  Created by Kristie Nguyen on 10/4/14.
//  Temperature Converter - A program that converts Celsius to Fahrenheit.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int COLUMN_WIDTH = 20;

int main(void)
{
    // 1. Prompt and input arguments.
    cout << "Please give in a Celsius degree >= 0: ";
    double celsius;
    cin >> celsius;
    cin.ignore(999, '\n');
    if ( celsius < 0)
    {
        cout << "No negative Celsius. Press ENTER to exit...";
        cin.ignore(999,'\n');
        return 1;
    }

    // 2. Process conversion from Celsius to Fahrenheit.
    float fahrenheit = ( celsius * (9.0/5.0) ) + 32;

    // 3. Output table.

    cout.setf(ios::left);
    cout.width(COLUMN_WIDTH);
    cout << "Celcius";
    cout<< "Fahrenheit" << endl;
    cout.unsetf(ios::left);

    cout.setf(ios::left);
    cout.width(COLUMN_WIDTH);
    cout << "---------";
    cout.setf(ios::left);
    cout << "------------" << endl;
    cout.unsetf(ios::left);

    cout.setf(ios::left);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.width(COLUMN_WIDTH);
    cout << celsius;
    cout.unsetf(ios::left);
    cout.setf(ios::left);
    cout << fahrenheit;
    cout.unsetf(ios::left);

    cout << endl;

    // 4. Finish.
    cout << endl << "Press ENTER to finish...";
    cin.ignore(999, '\n');
    return 0;
}
