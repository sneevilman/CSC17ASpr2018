/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 16, 2018 at 6:12PM
 * Purpose: Convert degrees Celsius to Fahrenheit
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
        short c=0,              //Declaring and initializing variables
              f=0;

            cout<<"Input a value of degrees Celsius to be converted to Fahrenheit."<<endl;
            cin>>c;

            f=(c*900/5+3200);       //multiplied the formula by 100 to avoid needing iomanip library for output
            cout<<c<<" degrees Celsius = "<<f/100<<"."<<f%100<<" degrees Fahrenheit."<<endl;
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