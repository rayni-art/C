//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  homework#5
//  Created by rayni on 4/10/22.
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

string InverseString(string);
string ReverseString(string);
string ToUpperCase(string);
int CountConsonants(string);

int main()
{
    int i;
    string userInput;
    string result;
    char menuChoice;
    
    cout<<"Please enter a word, a sentence, or a string of numbers."<<endl;
    getline(cin, userInput);

    do
    {
    cout<<endl;
    cout<<"USE THIS MENU TO MANIPULATE YOUR STRING"<<endl
        <<" --------------------------------------"<<endl
        <<"1) Inverse String"<<endl
        <<"2) Reverse String"<<endl
        <<"3) To Uppercase"<<endl
        <<"4) Count Number Words"<<endl
        <<"5) Count Consonants"<<endl
        <<"6) Enter a Different String"<<endl
        <<"7) Print the string"<<endl
        <<"Q) Quit"<<endl;
     cin>>menuChoice;
     
     switch (menuChoice)
     {
         case 1:
             for (int i= 0; i< userInput.length(); i++)
                         {
                             if (isupper(userInput[i]))
                                 userInput[i] = toupper(userInput[i]);
                             else if (islower(userInput[i]))
                                 userInput[i] = tolower(userInput[i]);

                         }
             userInput= InverseString(userInput);
             cout<<userInput;
             cout<<endl;
             break;
         case 2:
             userInput=ReverseString(userInput);
             for ( int i= 0; i< userInput.length(); i++)
                         {
                            userInput[i] = userInput[-1-i];
                         }
             cout<<endl;
             break;
         case 3:
             userInput = ToUpperCase(userInput);
             for (i = 0; i< userInput.lenght(); i++)
                            {
                                if (islower(userInput[i]))
                                    userInput[i] = toupper(userInput[i]);
                            }
                        }
                        break;
             cout<<endl;
             break;
         case 4:
             break;
         case 5:
             userInput= CountConsonants(userInput);
         case 6:
             cout<<"Please enter a word , a sentence  or a string of number:";
             getline(cin,userInput);
             break;
         case 7:
             userInput= InverseString(userInput);
             userInput=ReverseString(userInput);

             cout<< userInput;
             cout<<endl;
             break;
        default:
             cout << "Invalid selection, please choose again or hit q to quit."<<endl;
             break;
     }
  
 }while (menuChoice!='q');
    //system("PAUSE");
    return 0;
}
int counConsonants(string userInput)
{
    char  result;
    int number = 0;
    for (int i=1 ; i<userInput.length(); i++)
    {
        result = tolower(userInput[i]);
        if (isalpha(result) && (result != 'a' && result !='e' && result != 'i' && result != 'o' && result !='u'))
            number = number+1;

    }
    cout<< "The string has " << number<< "Consonants."<<endl;
    return number;


}

