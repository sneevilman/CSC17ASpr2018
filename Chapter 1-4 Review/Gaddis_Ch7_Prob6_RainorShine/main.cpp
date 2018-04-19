/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Purpose: Read and analyze weather data from a file
 * Created on February 27, 2018, at 9:08 PM
 */

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    const char MONTHS(3),DAYS(30),TYPES(3); //constant values for number of days, months, and types of weather
    char rainD[MONTHS][DAYS],           //stores char data for all weather results
         wCount[MONTHS][TYPES]={0},        //weather totals for each month, 0=rainy 1=Cloudy 2=sunny
         count,                         //increments days while reading in
         perLine=10;                    //formatting
    short rDays(0),cDays(0),sDays(0);   //total rainy days etc.
    ifstream inFile;
    
    
    inFile.open("WeatherData.txt");
    
    for(short i(0);i<MONTHS;i++){
        count=0;
            while(count<DAYS && inFile>>rainD[i][count]){count++;}    //reads data for days into a month, then increments the month
    }
    
    inFile.close();
    
    for(short i(0);i<MONTHS;i++){
        
        for(short t=0;t<TYPES;t++){
            wCount[i][t]=0;
        }
        
        switch(i){                              //display the proper month
            case 0:cout<<"June:"<<endl;break;
            case 1:cout<<"July:"<<endl;break;
            default:cout<<"August:"<<endl;
        }
        
        for(short l(0);l<DAYS;l++){             //outputs results for each day and fills weather type array
            cout<<right<<setw(2)<<l+1<<":"<<left<<setw(2)<<rainD[i][l];
            switch(rainD[i][l]){
                case 'R': wCount[i][0]++;rDays++;break;       //TYPE 0: RAIN
                case 'C': wCount[i][1]++;cDays++;break;       //TYPE 1: Cloudy
                case 'S': wCount[i][2]++;sDays++;break;       //TYPE 2: SUNNY
            }
            
            if((l+1)%perLine==0)cout<<endl;
        }
        cout<<endl;
        cout<<"Rainy Days: "<<setw(3)<<right<<static_cast<int>(wCount[i][0])<<endl;
        cout<<"Cloudy Days: "<<setw(2)<<right<<static_cast<int>(wCount[i][1])<<endl;
        cout<<"Sunny Days: "<<setw(3)<<right<<static_cast<int>(wCount[i][2])<<endl;
        cout<<endl;
        
    }
    
    
        cout<<"Total Rainy Days: "<<setw(3)<<right<<rDays<<endl;
        cout<<"Total Cloudy Days: "<<setw(2)<<right<<cDays<<endl;
        cout<<"Total Sunny Days: "<<setw(3)<<right<<sDays<<endl;
    
        char mstRain(0),rMonth(0);
        for(short i(0);i<MONTHS;i++){
            for(short l=0;l<i;l++){
            if(mstRain<wCount[l][0]){
                mstRain=wCount[l][0];
                rMonth=l;
            }
        }
        }
            cout<<"Most Rainy Days: ";
            switch(rMonth){
                case 0: cout<<"June"<<endl;break;
                case 1: cout<<"July"<<endl;break;
                case 2: cout<<"August"<<endl;break;
            }
    
    
    return 0;
}

