// Created by Kristie Nguyen on 9/18/2014.
// Bill Generator - A program that produces a bill.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// 1 Constants.
const int MINUTES_IN_AN_HOUR = 60;
const float SERVICE_TAX_RATE = 0.04f;
const int AMOUNT_FIELD_WIDTH = 10;
const int DATA_PRECISION = 2;

int main(void)
{
    // 2 General instructions.
    cout << "Kristie's Bill Generator" << endl;
    cout << endl;
    cout << "Please enter the following values:" <<endl;

    // 3 Produce total charges.

    // 3.1 Input charges needed.

    float equipmentRentalFlatFee;
    cout << "Equipment Rental (Flat Fee)      -> ";
    cin >> equipmentRentalFlatFee;
    cin.ignore(999,'\n');

    float serviceHourlyRate;
    cout << "Service Hourly Rate              -> ";
    cin >> serviceHourlyRate;
    cin.ignore(999,'\n');

    int minutesOfServiceUse;
    cout << "Total minutes of service         -> ";
    cin >> minutesOfServiceUse;
    cin.ignore(999,'\n');

    // 3.2 Process charges.
	
    // 3.2.1 Process hours.
    int numberOfHours = ( minutesOfServiceUse / MINUTES_IN_AN_HOUR );
    // 3.2.1.1 Hours always rounded up.
    int numberOfHoursRoundedUp = ( minutesOfServiceUse + MINUTES_IN_AN_HOUR - 1 )
                                   / MINUTES_IN_AN_HOUR;

    // 3.2.2 Process service and total charges. 
    float serviceCharge = ( serviceHourlyRate 
		            * numberOfHoursRoundedUp );
    float serviceChargeTax = ( SERVICE_TAX_RATE * serviceCharge );
    float totalCharges = ( equipmentRentalFlatFee 
                          + serviceCharge + serviceChargeTax );

    // 3.3 Output total charges.
    cout << endl;
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << "The Total Charges Are: $";
    cout << totalCharges;
    cout << endl;

    // 4 Produce total bill.

    // 4.1 Input tip.
    float tip;
    cout << "Please enter your tip: ";
    cin >> tip;
    cin.ignore(999,'\n');

    // 4.2 Process total bill.
    float totalBill = totalCharges + tip;
    float minimumOKTip = 0.15 * totalBill;
    float minimumGoodTip = 0.20 * totalBill;

    // 4.3 Output final bill.

    // 4.3.1 Output final bill summary.
    cout << endl;
    cout << "========================================================================";
    cout << endl;
    cout << "Kristie's Service Bill" << endl;
    cout << endl;
    cout << "Equipment Rental Flat Fee $       ";
    cout.width (AMOUNT_FIELD_WIDTH);
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << equipmentRentalFlatFee;
    cout << endl;
    cout << "Service Fee                       ";
    cout.width (AMOUNT_FIELD_WIDTH);
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << serviceCharge << endl;
    cout << "Service tax                       ";
    cout.width (AMOUNT_FIELD_WIDTH);
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << serviceChargeTax;
    cout << endl;
    cout << "Tip                               ";
    cout.width (AMOUNT_FIELD_WIDTH);
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << tip << endl;
    cout.width (AMOUNT_FIELD_WIDTH);
    cout << "                                 -----------";
    cout << endl;
    cout << "Total Bill                $       ";
    cout.width (AMOUNT_FIELD_WIDTH);
    cout.setf( ios::fixed );
    cout.setf( ios::showpoint);
    cout.precision( DATA_PRECISION );
    cout << totalBill << endl;
    cout << "========================================================================";
    cout << endl;
    cout << endl;

    // 4.3.2 Output depending on tip.
    if ( tip < minimumOKTip && tip >= 0)
    	cout << "It is customary to tip 15% or more..." << endl;
    else if ( tip >= minimumOKTip
		&& tip <= minimumGoodTip )
    	cout << "Thank you, please come back again." << endl;
    else if ( tip > minimumGoodTip )
    	cout << "Wow, you are so generous! Thank you, come again!" << endl;
    else
    	cout << "No tip entered.";

    // 5 Finish up.
    // 5.1 Pause before closing.
    cout << endl;
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    // 5.2 Close.
    return 0;
}
