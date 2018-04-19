/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 27, 2018 at 8:36PM
 * Purpose: Convert degrees Celsius to Fahrenheit in a table
 */

//System Libraries Here
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here

int main() {
    //Declare and process variables
    bool restart;
    const char SIZE(21);
    //Process/Calculations Here
    
        float c=0,              //Declaring and initializing variables
              f=0;
        short wid=3;            //width for formatting
        cout<<setw(wid)<<left<<"c"<<"|f"<<endl;
        cout<<setw(wid)<<left<<"-------"<<endl;
        for(c;c<SIZE;c++){
            f=(c*9/5+32);
            cout<<setw(wid)<<left<<setprecision(4)<<c<<"| "<<f<<endl;
        }
            

    //Output Located Here

    //Exit
    return 0;
}