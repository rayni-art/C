//2022 Spring Online class
//Computer Information System
//  main.cpp
//  homework#1
//  Created by rayni on 3/5/22.

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<fixed << setprecision(1)<<setw(6)<<3.0<<endl
        <<"* "
        <<fixed << setprecision(1)<<setw(4)<<5.0<<endl
        << "------\n"
        << fixed << setprecision(2)<<setw(6)<<3.0*5.0<<endl
        <<endl
        <<endl;
    cout<<fixed << setprecision(1)<<setw(6)<<7.1<<endl
        <<"* "
        <<fixed << setprecision(1)<<setw(4)<<8.3<<endl
        <<fixed << setprecision(1)<<"-"<<setw(5)<<2.2<<endl
        << "------\n"
        << fixed << setprecision(2)<<setw(6)<<7.1*8.3-2.2<<endl
        <<endl
        <<endl;
    cout<<fixed << setprecision(1)<<setw(6)<<3.2<<endl
        <<"/"
        <<fixed << setprecision(1)<<setw(2)<<"("<<6.1<<endl
        <<fixed << setprecision(1)<<"*"<<setw(4)<<5<<")"<<endl
        << "------\n"
        << fixed << setprecision(2)<<setw(6)<<3.2/(6.1*5)<<endl
        <<endl;
    
    
    //System("PAUSE")
    return 0;
}


