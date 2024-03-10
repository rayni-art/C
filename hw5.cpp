//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  homework#1
//  Created by rayni on 3/6/22.
//Pseudocode
//1, Create variable apples
//2, Create variable oranges
//3, Create variable bananas
//4, Get user input for apples
//5, Get user input for oranges
//6, Get user input for bananas
//7, Print store name
//8, print seprate line
//9, print numbers for apples and price for appeles
//10,print number for oranges and ptice for oranges
//11,print numbet for banana and price for bananas
//12,print out totals
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int apples;
    int oranges;
    int bananas;
    
    cout<<"Please enter the number of apples you want to purchase: "<<endl;
    cin>>apples;
    cout<<"Please enter the number of oranges you want to purchase: "<<endl;
    cin>>oranges;
    cout<<"Please enter the number of bananas you want to purchase: "<<endl;
    cin>>bananas;
    
    cout<<endl
    <<"BOB'S FRUITS GROCERY INVOICE"<<endl
    <<"----------------------------"<<endl
    <<"  "<<apples<<" Apples  @ 0.65 each  "<<" = $ "<<fixed<<setprecision(2)<<apples*0.65<<endl
    <<"  "<<oranges<<" Oranges @ 0.90 each  "<<" = $ "<<fixed<<setprecision(2)<<oranges*0.90<<endl
    <<"  "<<bananas<<" Bananas @ 0.70 each  "<<" = $ "
    <<fixed<<setprecision(2)<<bananas*0.70<<endl
    <<"\t\t\t-----------"<<endl
    <<"\t\t    TOTAL = $"<<fixed<<setprecision(2)<<" "<<(apples*0.65)+(oranges*0.90)+(bananas*0.70)<<endl;
    //System("PAUSE")
    return 0;
    
}
