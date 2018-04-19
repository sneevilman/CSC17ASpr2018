/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 17, 2018 6:08 PM
 * Purpose: Find the number of days in a month based on month and year
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here
bool Restart();
//Program Execution Begins Here

int main() {
    //Declare and process variables
    bool restart;

    //Process/Calculations Here
    do {
        short monthIn(0);
        unsigned short yearIn(0);
        char days(31);
        while(monthIn<1||monthIn>12){
            cout<<"Enter a month (1-12):"<<endl;
            cin>>monthIn;
            if(monthIn<1||monthIn>12)cout<<"invalid input"<<endl;
        }
        while(yearIn<1||yearIn>65534){
            cout<<"Enter a Year:"<<endl;
            cin>>yearIn;
            if(yearIn<1||yearIn>65534)cout<<"invalid input"<<endl;
        }
        if(monthIn==4||monthIn==6||monthIn==9||monthIn==11)days=30;
        else if(monthIn==2){
            if(yearIn % 100==0){
                if(yearIn % 400==0){
                    days=29;
                }else days=28;
            }else if(yearIn % 4==0)days=29;
             else days=28;
        }
            cout<<static_cast<int>(days)<<" days"<<endl;
        
        
        restart = Restart();
    } while (restart);

    //Output Located Here

    //Exit
    return 0;
}

bool Restart() {
    char ans;
    bool restart;
    cout << endl;
    cout << "Would you like to run this program again? y/n" << endl;
    cin>>ans;
    while (ans != 'y' && ans != 'n' && ans != 'Y' && ans != 'N') {
        cout << "Please enter y/n" << endl;
        cin>>ans;
    }
    if (ans == 'y' || ans == 'Y')
        restart = true;
    else
        restart = false;
    return restart;
}