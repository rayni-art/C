//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7p2
//  Created by rayni on 5/27/22.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getTotal(double[], int);
double getAverage(double[], int);
double getLowest(double[], int, int&);
double getHighest(double[], int, int&);

const int MONTHS = 12;
string months[MONTHS] = { "January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December" };
double rainFall[12];

int main()
{
    cout << "Enter the rainfall for:" << endl << endl;
    for (int index = 0; index < 12; index++)
    {
        cout << left << setw(10);
        cout << months[index] << ": " << setw(5);
        cin >> rainFall[index];
    }

    int lowestMonth, highestMonth;
    double low, high;

    cout << endl;
    cout << "The total rainfall is "    << getTotal(rainFall, MONTHS) << endl;
    cout << "The average rainfall is "  << getAverage(rainFall, MONTHS) << endl;

    low = getLowest(rainFall, MONTHS, lowestMonth);
    high = getHighest(rainFall, MONTHS, highestMonth);

    cout << months[lowestMonth] << " has the lowest rainfall at " << low << endl;
    cout << months[highestMonth] << " has the highest rainfall at " << high << endl << endl;

    system("pause");
    return 0;
}

double getTotal(double rainfall[], int size)
{
    double total = 0;
    for (int index = 0; index < size; index++)
    {
        total += rainfall[index];
    }
    return total;
}

double getAverage(double rainfall[], int months)
{
    double average = getTotal(rainfall, MONTHS) / months;
    return average;
}

double getLowest(double rainfall[], int size, int &lowestIndex)
{
    double lowest = rainfall[0];
    for (int index = 0; index < size; index++)
    {
        if (rainfall[index] <= lowest)
        {
            lowest = rainfall[index];
            lowestIndex = index;
        }
    }
    return lowest;
}
double getHighest(double rainfall[], int size, int &highestIndex)
{
    double highest = rainfall[0];
    for (int index = 0; index < size; index++)
    {
        if (rainfall[index] >= highest)
        {
            highest = rainfall[index];
                highestIndex = index;
        }
    }
    return highest;
}

