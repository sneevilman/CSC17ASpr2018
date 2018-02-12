/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: to jog my memory
 * Created on February 12, 2018, 11:30 AM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

short Restart(short);

/*
 * 
 */
int main(int argc, char** argv) {

    bool restart(false);
    
    do{
        
        
        
    cout<<"Welcome back to Netbeans, Caeleb. What would you like to do?\n"
            "1. Generate numbers\n"
            "2. Solve problems\n"
            "3. Store data\n"
            "x. Exit the program."<<endl;
    
    
    
    restart=Restart(restart);
    cout<<"restart="<< restart<<endl;
    }while(restart);
    
    return 0;
}

short Restart(short rstrt){
    rstrt=0;
    char ans('o');
    cout<<"Would you like to return to the menu (y/n)?"<<endl;                  //determine whether to return to the menu
    cin>>ans;
    while(ans!='n'&&ans!='N'&&ans!='y'&&ans!='Y'){                              //respond to invalid inputs
        cout<<"Invalid input. Please answer 'y' or 'n'."<<endl;
        cin>>ans;
    }
    if(ans=='y'||ans=='Y') rstrt=1;
    return rstrt;
}