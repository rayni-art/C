//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Stats
{
    private:
    string months;
    public:
    
    double getTotal(double[], int);
    double getAverage(double[], int);
    double getLowest(double[], int, int&);
    double getHighest(double[], int, int&);

    const int MONTHS = 12;
    double rainFall[12];
};
#endif
