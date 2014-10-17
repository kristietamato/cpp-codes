// Created by Kristie Nguyen on September 25, 2014.
// Gradebook - A program that outputs a message based on grades entered.

#include<iostream>
#include<string>
using namespace std;

const int LOWEST_DATA_END_RANGE = 0;
const int HIGHEST_DATA_END_RANGE = 100;
const int GRADES_ENTERED = 3;
const int LOWEST_OF_3_GRADES_TO_PASS = 50;
const int LOWEST_OF_2_GRADES_TO_PASS_BY_COMPENSATION= 50;
const int LOWEST_GRADE_TO_PASS_BY_COMPENSATION = 40;
const int LOWEST_AVERAGE_OF_GRADES = 50;

int main(void)
{

    // 1 Promt user for grades.
    cout << "Enter three test scores in the range [0...100]," << endl;
    cout << "separated by spaces: ";

    // 2 Initialize variables and input grades as needed.
    int grade1;
    int grade2;
    int grade3;
    cin >> grade1 >> grade2 >> grade3;
    cin.ignore(999, '\n');

    // 3 Check for datas out of bound and close program if it is.
    if ( grade1 < LOWEST_DATA_END_RANGE || grade1 > HIGHEST_DATA_END_RANGE
         || grade2 < LOWEST_DATA_END_RANGE || grade2 > HIGHEST_DATA_END_RANGE
         || grade3 < LOWEST_DATA_END_RANGE || grade3 > HIGHEST_DATA_END_RANGE)
    {
        // 3.1 Tell user about the error.
        cout << endl;
        cout << "Data out of range. ";

        // 3.2 Close program.
        // 3.2.1 Pause before closing.
        cout <<"Press ENTER to terminate the program...";
        cin.ignore(999,'\n');
        // 3.2.2 Close.
        return 1;
    }

    // 4 Process the average of all grades.
    int average = ( grade1 + grade2 + grade3 ) / GRADES_ENTERED;

    // 5 Output message depending on grade inputs.
    // 5.1 If grade is at least 50 in every test.
    if ( grade1 >= LOWEST_OF_3_GRADES_TO_PASS
         && grade2 >= LOWEST_OF_3_GRADES_TO_PASS
         && grade3 >= LOWEST_OF_3_GRADES_TO_PASS )
        cout << "Grade: Pass" << endl;
    // 5.2 If grade is at least 50 in 2 tests, with lowest one being 40, and
    // the average of all tests is at least 50.
    else if ( ( grade1 && grade2 >= LOWEST_OF_2_GRADES_TO_PASS_BY_COMPENSATION )
             || ( grade1 && grade3 >= LOWEST_OF_2_GRADES_TO_PASS_BY_COMPENSATION)
             || (grade2 && grade3 >= LOWEST_OF_2_GRADES_TO_PASS_BY_COMPENSATION)
             && ( grade1 >= LOWEST_GRADE_TO_PASS_BY_COMPENSATION )
             && ( grade2 >= LOWEST_GRADE_TO_PASS_BY_COMPENSATION )
             && ( grade3 >= LOWEST_GRADE_TO_PASS_BY_COMPENSATION )
             && ( average >= LOWEST_AVERAGE_OF_GRADES ) )
        cout << "Grade: Pass By Compensation" << endl;
    // 5.3 If prior conditions are false.
    else
        cout << "Grade: Fail" << endl;

    // 6 Finish up.
    // 6.1 Pause before closing.
    cout << endl << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    // 6.2 Close.
    return 0;
}