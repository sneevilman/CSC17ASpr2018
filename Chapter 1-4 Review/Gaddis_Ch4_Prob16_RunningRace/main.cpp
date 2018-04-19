/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Feb 18, 2018 7:46 PM
 * Purpose: Display runners in order of placement
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

void Sort(string[],float[]);
void Read(string[],float[]);
//Function Prototypes Here
bool Restart();
//Program Execution Begins Here
const short RUNS(3);
int main() {
    //Declare and process variables
    bool restart;
    string runner[RUNS];
    float fnshTme[RUNS];
    //Process/Calculations Here
        cout<<"This program displays the order in which\n"
                "three runners placed in a race."<<endl;
    do {
        for(short i=0;i<RUNS;i++){
            cout<<"Please input the name of runner #"<<i+1<<":"<<endl;
            cin>>runner[i];
            cout<<"Please enter "<<runner[i]<<"'s time in minutes:"<<endl;
            cin>>fnshTme[i];
        }
        Sort(runner,fnshTme);
        Read(runner,fnshTme);
        restart = Restart();
    } while (restart);

    //Output Located Here

    //Exit
    return 0;
}

void Sort(string r[],float t[]){
    
    for(short i=0;i<RUNS-1;i++){
        short l=i;
        for(short b=l+1;b<RUNS;b++){
            if(t[l]>t[b]){                  //compare running times
                float tempT(0);             //swap times in array
                tempT=t[b];
                t[b]=t[l];
                t[l]=tempT;
                
                string tempR;            //swap strings in array
                tempR=r[b];
                r[b]=r[l];
                r[l]=tempR;
                
            }
        }
        
    }
}
void Read(string r[],float t[]){
    for(short i=0;i<RUNS;i++){
        cout<<i+1<<": "<<r[i]<<" - "<<t[i]<<endl;
    }
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