//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.

#include <iostream>
#include <iomanip>
#include "GiftWrap.h"
#include <string>
using namespace std;

int main()
{
   
    char userChoice;
    string store = "Sally's Gifts";
    GiftWrap sallys(.0925, .0025);
    


do{
      cout  <<"GIFT WRAP INVOICE GENERATOR"<<endl
            <<"------------------------"<<endl
            <<"a)Generate Gift Wrap Invoice"<<endl
            <<"q)Quit"<<endl;
     cin>>userChoice;
    
     if (userChoice =='a' || userChoice=='A')
     {
         double len;
         cout<<"Please enter the length of your gifts: "<<endl;
         cin>>len;
         cin.ignore();
         sallys.setLength(len);
         double W;
         cout<<"Please enter the width of your gifts: "<<endl;
         cin>>W;
         cin.ignore();
         sallys.setWidth(W);
         double H;
         cout<<"Please enter the height of your gifts: "<<endl;
         cin>>H;
         cin.ignore();
         sallys.setHeight(H);
         
          std::cout<<std::fixed;
          std::cout<<setprecision(2);
          std::cout<<"GIFT WRAP INVOICE - Sally's Gifts"<<endl
         <<"----------------------------------"<<endl
         <<"Box Length:"<<sallys.getLength()<<endl
         <<"Box Width:"<<sallys.getWidth()<<endl
         <<"Box Height:"<<sallys.getHeight()<<endl;
         std::cout<<setprecision(5);
          cout<<"Price Per Inch:"<< sallys.getPricePerInce()<<endl
         <<endl;
         std::cout<<setprecision(2);
        cout<<"SUBTOTAL:"<<sallys.calcSubtotal()<<endl
            <<"TAX:"<< sallys.calctotalTax()<<endl
            <<"---------"
            <<endl
            <<"TOTAL:"<<sallys.calcTotalPayment()<<endl;

            return 0; 
     }
    else if (userChoice == 'q'|| userChoice=='Q')
    {
             
             cout<<endl<<"You have chosen to quit the program. Thank you for using the program!"<<endl;
        
         
     }
    else
    {
        cout <<"Invalid Selection"<<endl;
        
    }
         
    }while(userChoice != 'q'&& userChoice != 'Q');
}
