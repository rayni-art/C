//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.
//


#include "Stats_h.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{    int months;
    const int MONTHS = 12;

    cout << "Enter the rainfall for:" << endl << endl;
        for (int index = 0; index < 12; index++)
        {
            cout << left << setw(10);
            cout << months[MONTHS] << ": " << setw(5);
            cin  >> months[MONTHS];
        }

   
}
