
//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  main.cpp
//  homework#1
//  Created by rayni on 3/5/22.

//Pseudocode
// 1, Create variable input num1
// 2, Create variable input num2
// 3, Create variable 750 gold pieces name gp
// 4, Printout Welcome statement
// 5, Printout enter question statement
// 6, Create user input for number explorers
// 7, Print user input
// 8, Create user input for explorers lost
// 9, Print user input
// 10,Print lost members numbers and survived numbers
// 11,Print extra gold pieces

#include <iostream>

using namespace std;

int main()
{
   int num1;
   int num2;
   int gp=750;

    
   cout<<"Welcome to Lost Fortune!"<<endl
       <<endl;
   cout<<"Please enter the following questions for your personalized adventure: "<<endl
        <<endl;
   cout<<"Enter the number of Explorers: "<<endl;
   cin>>num1;
   cout<<"Enter the number of Explorers Lost in Battle: "<<endl;
   cin>>num2;
   cout<<endl
       <<"You bravely led "<< num1 << " adventurers on a quest for gold."<<endl
       <<"The group fought a band of ogres and lost "<<num2<<" members."<<endl
       <<"Only "<< num1-num2 <<" survived." <<endl
       <<endl;
    cout<<"The party was about to give up when they stumbled upon the"<<endl
       <<"buried fortune of 750 gold pieces. The group split the loot evenly"<<endl
       <<"and as the qeust leader you kept the extra"<<" "<<gp-(gp/(num1-num2)* (num1-num2))<< " gold pieces."<<endl
       <<endl;
    
    //System("PAUSE")
    return 0;
}



