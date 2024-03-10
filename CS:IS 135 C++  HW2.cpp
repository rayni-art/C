//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  main.cpp
//  homework#1
//  Created by rayni on 3/14/22.


#include <iostream>
#include<iomanip>

using namespace std;
char selection;

int main()
{
    int MercuryWeight;
    int VenusWeight;
    int EarthWeight;
    int MarsWeight;
    int JupiterWeight;
    int SaturnWeight;
    int UranusWeight;
    int NeptuneWeight;
 
    float MercuryGravity=0.27;
    float VenusGravity=0.86;
    float EarthGravity=1.00;
    float MarsGravity=0.37;
    float JupiterGravity=2.64;
    float SaturnGravity=1.17;
    float UranusGravity=0.92;
    float NeptuneGravity=1.44;
    
    int MercuryDistance= 57000020;
    int MercuryDay= 43182;
    float MercuryYears = 118.31;
    
    int EarthDistance=0;
    int EarthDays=0;
    float EarthYears=0;
    
    long NeptuneDistance=2699999925;
    int  NeptuneDays=189076;
    float NeptuneYears=518.02;
    
    long UranusDistance=1688999985;
    int  UranusDays= 350124;
    float UranusYears= 959.24;
    
    long MarsDistance= 47999725;
    int  MarsDays=1951;
    float  MarsYears=5.35;
    
    int speed;
    
    
    cout<<"Welcome to INTERPLANETARY TRAVEL PROGRAM!"<<endl;
    cout<<"This program enables you to find out your travel time to the planet"<<endl
    <<"you want to travel to as well as your weight on that planet."<<endl
    <<"Please enjoy the program and find the perfect planet for you!"<<endl
    <<endl
    <<endl;
    cout<<"INTERPLANETARY TRAVEL MENU"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"a) Mercury"<<endl
        <<"b) Venus"<<endl
        <<"c) Earth"<<endl
        <<"d) Mars"<<endl
        <<"e) Jupiter"<<endl
        <<"f) Saturn"<<endl
        <<"g) Uranus"<<endl
        <<"h) Neptune"<<endl
        <<"q) quit"<<endl
        <<endl;
    cout<<"Select a planet to travel to or q to quit the program: ";
    cin>>selection;

    switch (selection) {

        case 'a':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>MercuryWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL:  Earth to Mercury"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Mercury:      "<<MercuryWeight*MercuryGravity<<" lbs"<<endl;
            cout<<endl;
            cout<<"Your travel time to Mercury:"<<endl;
            cout<<"    In Hours: "<<MercuryDistance/speed<<" hours"<<endl
                <<"    In Days : " <<MercuryDay<<" days"<<endl
                <<"    In Years : "<<fixed<<setprecision(2)<<MercuryYears<<" years"<<endl
                <<endl;
            break;
        case 'b':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>VenusWeight;
            cout<<endl;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL: Earth to Venus"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Your weight on Venus       "<<VenusWeight*VenusGravity<<"lbs"<<endl;
            cout<<"Your travel time to  Venus:"<<endl;
            cout<<endl;
            cout<<"     In Hours:"<<endl
                <<"     In Days:"<<endl
                <<"     In Years:"<<endl
            <<endl;
            break;

        case 'c':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>EarthWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL:  Earth to Earth"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Earth:      "<<fixed<<setprecision(2)<<EarthWeight*EarthGravity<<" lbs"<<endl;
            cout<<endl;
            cout<<"Your travel time to Earth:"<<endl;
            cout<<"    In Hours: "<<EarthDistance/speed<<" hours"<<endl
                <<"    In Days : " <<EarthDays<<" days"<<endl
                <<"    In Years : "<<fixed<<setprecision(2)<<EarthYears<<" years"<<endl
                <<endl;
            break;

        case 'd':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>MarsWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL:  Earth to Mars"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Mars:      "<<MarsWeight*MarsGravity<<" lbs"<<endl;
            cout<<endl;
            cout<<"Your travel time to Mars:"<<endl;
            cout<<"    In Hours: "<<MarsDistance/speed<<" hours"<<endl
                <<"    In Days : "<<MarsDays<<" days"<<endl
                <<"    In Years : "<<fixed<<setprecision(2)<< MarsYears<<" years"<<endl
                <<endl;
            break;
            
        case 'e':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>JupiterWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL: Earth to Jupiter"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Your weight on Jupiter:       "<<JupiterWeight*JupiterGravity<<"lbs"<<endl;
            cout<<"Your travel time to Jupiter:"<<endl;
            cout<<endl;
            cout<<"     In Hours:"<<endl
                <<"     In Days:"<<endl
                <<"     In Years:"<<endl
                <<endl;
            break;

        case 'f':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>SaturnWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL: Earth to Saturn"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Saturn:       "<<SaturnWeight*SaturnGravity<<"lbs"<<endl;
            cout<<"Your travel time to Saturn:"<<endl;
            cout<<endl;
            cout<<"     In Hours:"<<endl
                <<"     In Days:"<<endl
                <<"     In Years:"<<endl
                <<endl;
            break;

        case 'g':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>UranusWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL:  Earth to Uranus"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Uranus:      "<<fixed<<setprecision(2)<<UranusWeight*UranusGravity<<" lbs"<<endl;
            cout<<endl;
            cout<<"Your travel time to Uranus:"<<endl;
            cout<<"    In Hours: "<<UranusDistance/speed<<" hours"<<endl
                <<"    In Days : " <<UranusDays<<" days"<<endl
                <<"    In Years : "<<fixed<<setprecision(2)<<UranusYears<<" years"<<endl
                <<endl;
            break;

        case 'h':
            cout<<endl<<"Please enter your weight (in lbs): "<<endl;
            cin>>NeptuneWeight;
            cout<<"Please enter the speed (in mile per hour) that you would like to travel at: "<<endl;
            cin>>speed;
            cout<<endl;
            cout<<"INTERPLANETARY TRAVEL:  Earth to Neptune"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Your weight on Neptune:      "<<fixed<<setprecision(2)<<NeptuneWeight*NeptuneGravity<<" lbs"<<endl;
            cout<<endl;
            cout<<"Your travel time to Neptune:"<<endl;
            cout<<"    In Hours: "<<NeptuneDistance/speed<<" hours"<<endl
                <<"    In Days : " <<NeptuneDays<<" days"<<endl
                <<"    In Years : "<<fixed<<setprecision(2)<<NeptuneYears<<" years"<<endl
                <<endl;
            break;

        case 'q':
            cout<<endl<<"You have chosen to quit the program. Thank you for using the program!"<<endl;
            break;
            
        default:
            cout<<endl<<"You have entered an invalid selection."<<endl;
            break;


    }

    
}
