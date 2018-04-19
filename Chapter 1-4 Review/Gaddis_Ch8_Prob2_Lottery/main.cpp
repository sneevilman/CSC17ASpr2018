/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 28, 2018, at 9:16 AM
 * Purpose: compare number input to array (lottery ticket numbers)
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
    const char SIZE(10);
    int lotAry[SIZE]=
    {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121},
        lotNum;                    //inputted lottery number
    
    
    //Process/Calculations Here
    do {
        bool match(false);         //initialize match flag
        lotNum=0;                  //initialize lotNum for validation
        cout<<"Please enter this week's 5 digit lottery ticket number"<<endl;
        while(lotNum<10000||lotNum>99999){  //input validation
        cin>>lotNum;
        if(lotNum<10000||lotNum>99999)cout<<"Invalid input."<<endl;
        }
        while(match==false){                        //stops linear search early if it finds a match
        for(short i=0;i<SIZE;i++){                  //linear search
            if(lotNum==lotAry[i]){
                cout<<"It's a winner!"<<endl;
                match=true;
            }
        }
        if(match==false){match=true;cout<<"Better luck next time!"<<endl;}
        }
        
        
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