/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 17, 2018 6:31 PM
 * Purpose: Determine discount by quantity
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Function Prototypes Here
bool Restart();
//Program Execution Begins Here

int main() {
    
    //Declare and process variables
    bool restart;
    const short PRICE(99);
    
    //Process/Calculations Here
    cout<<"A software company is selling a package with MSRP $99, with\n"
                "discounts for bulk purchases. This program determines the\n"
                "value of your discount based on the number of units purchased."<<endl;
        
    do {
        unsigned short quan(0);
        float cost(0);
        char disc(10);
        
        while(quan==0){
            cout<<"Please enter the quantity you are purchasing."<<endl;
            cin>>quan;
            if(quan==0){
                cout<<"invalid input"<<endl;
            }
        }   //input + validation for quan
        
        {
        if(quan>=100)disc=5;
        else if(quan>=50)disc=6;
        else if(quan>=20)disc=7;
        else if(quan>=10)disc=8;
        else disc=10;
        }           //determine discount by quantity
        
                cost=quan*PRICE;
                cout<<"Cost Before Discount: $"<<cost<<endl;
                cout<<"Discount for This Sale: "<<10-disc<<"0%"<<endl;  //show discount
                cost=cost*disc/10;                                      //apply discount
                cout<<fixed<<setprecision(2)<<"Total Cost: $"<<cost<<endl;
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