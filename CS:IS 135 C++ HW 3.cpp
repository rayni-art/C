//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  main.cpp
//  homework#3
//  Created by rayni on 3/20/22.

#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
char selection;
int  MultiplicationTable=0;
int  row;
int  col;
int main(void)
{
    do{
        cout << "MENU"<<endl
             << "a) Generate Multiplication Table"<<endl
             << "q) Quit the program"<<endl;
        cout<<"Please make a selection: ";
        cin>>selection;
        
       
        if (selection =='a')
           {
               MultiplicationTable++;
               cout<<"Please enter a number for your multiplication table: ";
               cin>>MultiplicationTable;
               cout<<endl
                   <<endl;
               cout<<"MULTIPLICATION TABLE: "<<MultiplicationTable<<"'s"<<endl;
               for (int count = 1; count<=MultiplicationTable; count++)
               {
                   printf("%4d ", count);


               }
               printf("\n");
               printf("  ");
            

               for(int count = 1; count<=MultiplicationTable; count++){
                printf("----|");
                   
                   }
                printf("\n");

               for(int row =1; row<=MultiplicationTable;row++){

                   printf("%i|", row);

                   for(int col =1;col<=MultiplicationTable; col++){
                   
                    printf("%4i|", row*col);

                       
           }
                   printf("\n");
                   printf("  ");
                   for(int count = 1; count<=MultiplicationTable; count++){
                   printf("----|");
                   }

                   printf("\n");
                   
                   
               }
               
              
           }
               
           
       else if(selection !='a'||selection !='q')
        {
            cout<<"Invalid Selection"<<endl;
            cout<<endl;
         }
       else if (selection =='q')
       {
           cout<<"Quit";
       }
            }while(selection !='q');
            //system("PAUSE");
        return 0;

}





