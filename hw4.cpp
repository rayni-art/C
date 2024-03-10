//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  homework#1
//  Created by rayni on 3/6/22.
//Pseudocode
// 1, Create variable length
// 2, Dislay the  length  input value
// 3, Create variable height
// 4, Display the height value
// 5, Get length user input from the keyboard
// 6, Get height user input from the keyboard
// 7, Display the base of the pyramid
// 8, Display the height of the pyramid
// 9, Display the volume if the pyramid

#include<iostream>
#include<iomanip>
using namespace std;
    
int main()
    {
   
    float length;
    float height;
    
    cout<<"Please enter the length of one of the sides of the base: "<<endl;
    cin>>length;
    cout<<"Please enter the height of the pyramid: "<<endl;
    cin>>height;
    cout<<endl
        <<endl
    <<"The area of the base of the pyramid is: "<<fixed<<setprecision(2)<<length*length<<endl
    <<"The height of the pyramid is: "<<fixed<<setprecision(2)<<height<<endl
    <<"The volume of the pyramid is: "<<fixed<<setprecision(2)<<(length*length)*height/3<<endl;
   //System("PAUSE")
    return 0;
    }

