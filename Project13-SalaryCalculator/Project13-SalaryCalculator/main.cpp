//  main.cpp
//  Project13-SalaryCalculator
//
//  Created by Kristie Nguyen on 12/10/14.
//  Calculates salary based on the number of hours worked and hourly rate.
//  If overtime (> 40), hourly rate is multiplied by 1.5.

#include "tools.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double OVERTIME_RATE_INCREASE =  1.5;

int main(void)
{
    int hoursWorked;
    double hourlyRate;
    double salary = 0.0;

    while (true)
    {
        // get input
        hoursWorked = getInt("Enter hours worked (-1 to end): ");
        if (hoursWorked == -1)
        {
            break;
        }
        hourlyRate = getFloat("Enter hourly rate of the employee (00.00): ");

        // process
        if (hoursWorked > 40)
        {
            salary = hoursWorked * hourlyRate * OVERTIME_RATE_INCREASE;
        }
        salary = hoursWorked * hourlyRate;

        // output
        cout << "Salary is $" << setprecision(2) << fixed << salary << endl;
        cout << endl;

        if (!getBool("Do you want to do again? "))
        {
            break;
        }
        cout << endl;
    }
    return 0;
}