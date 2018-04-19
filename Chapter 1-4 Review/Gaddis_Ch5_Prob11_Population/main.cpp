/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 27, 2018, 7:58PM
 * Purpose: Show population growth over time
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
    float pop(2);
    unsigned short days;
    short growth;
    
        cout<<"This program predicts the size of a population of organisms\n"
              "over the course of an inputted number of days based on \n"
                "starting size and average daily population growth."<<endl;

    //Process/Calculations Here
    do {
        
        do{
        cout<<"Input the starting size of the population (no less than 2)."<<endl;
        cin>>pop;
        if(pop<2){
            cout<<"Invalid input."<<endl;
        }
        }while(pop<2);      //input+validation for pop
        
        do{
        cout<<"Input the percent rate of population growth (no less than 0)."<<endl;
        cin>>growth;
        if(growth<0){
            cout<<"Invalid input."<<endl;
        }
        }while(growth<0);   //input+validation for growth
        
        do{
        cout<<"Input the number of days (no less than 1)."<<endl;
        cin>>days;
        if(days<1){
            cout<<"Invalid input."<<endl;
        }
        }while(days<1);     //input+validation for days
        
        for(short i=0;i<days;i++){
            pop*=1+(static_cast<float>(growth)/100);
            cout<<"Day "<<i+1<<": "<<pop<<endl;
        }   //loops growth, outputs value at each day
        
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