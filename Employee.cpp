//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.

#include "Employee.h"
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


Employee:: Employee(string n, string idNum, string dept, string pos, int yW )
{
    if(name == "")
        name = n;
    else name = false;
    
    if (idNumber == "")
        idNumber = idNum;
    else idNumber = false;
   
    if (department == "")
        department = dept;
    else department = false;

    if (position == "")
        position=pos;
    else position = false;
    
    if( yearsWorked <='0')
     
        yearsWorked=yW;
    
    else yearsWorked=false;
}

bool Employee::setname(string n)
{
   bool validData;
   
   if( n == "")
   {
       name = n;
      validData = true;
   }
   else
      validData = false;
      
   return validData;
}


bool Employee:: setidNumber(string idNum)
{
   bool validData;
   if( idNum == "")
   {
      idNumber = idNum;
      validData = true;
   }
   else
      validData = false;
      
   return validData;
}
    
bool Employee::setdepartment(string dept)
    {
       bool validData;
       if( dept == "")
       {
         department = dept;
          validData = true;
       }
       else
          validData = false;
          
       return validData;
    }

bool Employee::setposition(string pos)
    {
       bool validData;
       if( pos == "")
       {
         position = pos;
          validData = true;
       }
       else
          validData = false;
          
       return validData;
    }
bool Employee::setyearsWorked(int yW)
    {
       bool validData;
       if( yW ==0)
       {
          yearsWorked = yW;
          validData = true;
       }
       else
          validData = false;
          
       return validData;
    }
string Employee::getname()const
{
  return name;
}


string Employee::getidNumber()const
{
  return idNumber;
}


string Employee::getdepartment()const
{
  return department;
}


string Employee::getposition()const
{
  return position;
}

int Employee::getyearsWorked()const
{
  return yearsWorked;
}

