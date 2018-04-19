/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 16, 2018 11:02 PM
 * Purpose: Convert USD to JPY and Euros
 */

//System Libraries Here
#include <iostream>
#include <iomanip>

/*1 usd = 106.27 Japanese Yen
  1 usd = 0.74 Euros*/

using namespace std;

//User Libraries Here
const float YPD = 106.27,
            EPD = 0.74;

//Function Prototypes Here
bool Restart();
//Program Execution Begins Here

int main() {
    //Declare and process variables
    bool restart;
    float dAmount,
          yAmount,
          eAmount;
    //Process/Calculations Here
    do {
        cout<<"Input a value in US Dollars to convert to Japanese\n"
                "Yen and Euros."<<endl;
        cin>>dAmount;
        yAmount=dAmount*YPD;
        eAmount=dAmount*EPD;
        cout<<fixed<<setprecision(2)<<"Yen = "<<yAmount<<endl;
        cout<<fixed<<setprecision(2)<<"Euros = "<<eAmount<<endl;
        

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