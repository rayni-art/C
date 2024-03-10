//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.
//         UML

//-----------------------------
//      Employee
//-----------------------------
//     -name:string;
//     -idNumber:string;
//     -department:string;
//     -position:string;
//     -yearsWorked:int ;
//  -----------------------------
//     Employee();
//    -bool setname(string);
//    -bool setidNumber(string);
//    -bool setdepartment(string);
//    -bool setposition(string);
//    -bool setyearsWorked(int);
//    -string getname()const;
//    -string getidNumber()const;
//    -string getdepartment()const;
//    -string getposition()const;
//    -int getyearsWorked()const;
//
#include <string>
#include <iostream>
#ifndef  Employee_H
#define  Employee_H
using namespace std;

class Employee
{
   private:
    string name;
    string idNumber;
    string department;
    string position;
    int yearsWorked;
    

   public:
     Employee(string, string,string,string,int);
     bool setname(string);
     bool setidNumber(string);
     bool setdepartment(string);
     bool setposition(string);
     bool setyearsWorked(int);
     string getname()const;
     string getidNumber()const;
     string getdepartment()const;
     string getposition()const;
     int    getyearsWorked()const;
    Employee()
        {
            name = "";
            idNumber = "";
            department = "";
            position = "";
            yearsWorked = 0;
        }


};

#endif

