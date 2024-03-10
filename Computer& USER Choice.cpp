//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  homework#4
//  Created by rayni on 3/26/22.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int getComputerChoice ();
int getPlayerChoice();
bool isTie(int,int);
bool isPlayerWinner(int,int);

 
int main()
{
    char userChoice;
    int playerChoice = 0;
    int computerChoice = 0;
    int myChoice = 0;
    int randomCompNum = 0;
    do
    {
        cout << endl
                <<"ROCK PAPER SCISSORS MENU"<<endl
                <<"------------------------"<<endl
                <<"p) Play Game"<<endl
                <<"q) Quit"<<endl
                <<"Please enter your choice : ";
        cin>>userChoice;

        if (userChoice=='p')
        {
            playerChoice = getPlayerChoice();
            computerChoice = getComputerChoice();
            
             if(isPlayerWinner(playerChoice,computerChoice) == true)
            {
                cout<<"You WIN!"<<endl<<endl;
                
            }
            
            else if(isPlayerWinner(playerChoice,randomCompNum)== false)
            {
                cout<<"Sorry you LOSE."<<endl<<endl;
            }
            else if (isTie(myChoice,randomCompNum)== true)
            {
                cout<<"It's TIE!"<<endl<<endl<<endl;
                
            }
            else if (isTie(myChoice, randomCompNum)== false)
            {
                cout<<endl;
            }

                    
        }
        else if (userChoice == 'q')
            
            cout<<endl<<"You have chosen to quit the program. Thank you for using the program!"<<endl;
        else if (userChoice !='q' || userChoice !='p')
        {
            cout<<endl<<"Invalid selection. Try again."<<endl<<endl;
        }

    }while(userChoice != 'q');
   
        //system("PAUSE");
     return 0;
}
int getComputerChoice()
    {
    srand((unsigned int)time(NULL));
    int randomComNum = rand() % 3+1;
    
    if (randomComNum ==1)
    {
        cout<<" The computer chose: Rock"<<endl<<endl;
    }
    else if (randomComNum == 2)
    {
        cout<<"The computer chose : Paper"<<endl<<endl;
    }
    else if (randomComNum==3)
    {
        cout<<"The computer chose : Scissors"<<endl<<endl;
    }
    return randomComNum;
}
int getPlayerChoice()
{
    int myChoice;
       cout<<endl
           <<endl
           <<endl
           <<"Rock, Paper, or Scissors?\n"
           <<"1) Rock\n"
           <<"2) Paper\n"
           <<"3) Scissors\n"
           <<"Please enter your choice : ";
       cin>>myChoice;
    if (myChoice==1)
    {
        cout<<endl<<endl<<"You chose : Rock"<<endl;
        
    }
    else if (myChoice==2)
    {
        cout<<endl<<endl<<"You chose : Paper"<<endl;
     }
    else if (myChoice==3)
    {
        cout<<endl<<endl<<"You chose : Scissors"<<endl;
    }
    
   
    return myChoice;

}

bool isPlayerWinner(int myChoice, int randomCompNum)
{
    if((myChoice == 1) &&( randomCompNum == 3))
       
    {
        return true;
    }
    
    else if ((myChoice == 3 )&& ( randomCompNum == 2))
    {
       return true;
    }
    else if ((myChoice == 2) && ( randomCompNum == 1))
    {
        return true;
        return 0;
    }
       
       else if ((myChoice == 3 )&& ( randomCompNum == 1))
    {
        return false;
    }
        else if ((myChoice == 3) && ( randomCompNum == 2))
    {
           return false;
    }
        else if ((myChoice == 2 )&& ( randomCompNum == 1))
        {
        return false;
    }
    return 0;
}

            


bool isTie (int myChoice, int randomCompNum)
{

   if(myChoice == randomCompNum)
   {
      return true;
   }
   else if (myChoice  != randomCompNum)
   {
     return false;
   }
    return 0;
}
