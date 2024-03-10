//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.


#include <string>
#include <iomanip>
#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
    Employee obj1("Jenny Jacobs", "JJ8990", "Accounting", "President",15);
    Employee obj2("Myron Smith", "MS7571", "IT", "Programmer", 5);
    Employee obj3("Chris Raines", "CR6873", "Manufacturing", "Engineer", 30);
    Employee obj4;

     
    cout<< "Name"<< fixed << setw(20)<<"IDNUMBER"<< fixed << setw(20)<<"Department"<< fixed << setw(20)<<" Position"<< fixed << setw(20)<<"YearsWorked"<<endl;
    cout <<obj1.getname()<< fixed << setw(10);
    cout <<obj1.getidNumber() << fixed << setw(22);
    cout <<obj1.getdepartment()<< fixed << setw(21);
    cout <<obj1.getposition()<< fixed << setw(10);
    cout <<obj1.getyearsWorked()<<endl<< fixed << setw(9);
   
    cout <<obj2.getname()<< fixed << setw(11);
    cout <<obj2.getidNumber() << fixed << setw(14);
    cout <<obj2.getdepartment()<< fixed << setw(30);
    cout <<obj2.getposition()<< fixed << setw(8);
    cout <<obj2.getyearsWorked()<<endl<< fixed << setw(9);
   
    cout <<obj3.getname()<< fixed << setw(10);
    cout <<obj3.getidNumber() << fixed << setw(25);
    cout <<obj3.getdepartment()<< fixed << setw(17);
    cout <<obj3.getposition()<< fixed << setw(11);
    cout <<obj3.getyearsWorked()<<endl<< fixed << setw(9);
    
    return 0;
}

