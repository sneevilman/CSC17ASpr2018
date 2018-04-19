/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on March 13, 2018, 11:43 PM
 * Purpose: dynamically hold, sort, and calculate average for test scores
 */

#include <iostream>

using namespace std;

void filPt(int[],int*[],int &);
void sort(int*[],int &);
int avg(int[],int &);
void print(int*[],int &);


int main(int argc, char** argv) {
    
    int size;
    cout<<"input the size"<<endl;
    cin>>size;
    int* tScore = new int[size];
    int* ptr[size];
    for(short i=0;i<size;i++){
        do{
        cin>>tScore[i];
        if(tScore[i]<0){cout<<"Invalid entry"<<endl;}
        }while(tScore[i]<0);
    }
    
    filPt(tScore,ptr,size);
    sort(ptr,size);
    cout<<"Average: "<<endl;
    cout<<avg(tScore,size)<<endl;
    print(ptr,size);
    
    return 0;
}


void filPt(int t[],int* p[],int& s){
    for(short i=0;i<s;i++){
        p[i]=&t[i];
    }
}

void sort(int* p[],int& s){
    for(short i=0;i<s-1;i++){
        for(short l=i+1;l<s;l++){
            if(*p[i]>*p[l]){
                int* temp;
                *temp=*p[i];
                *p[i]=*p[l];
                *p[l]=*temp;
            }
        }
    }
}

int avg(int t[],int& s){
    int sum(0);
    for(short i=0;i<s;i++){
        sum+=t[i];
    }
    int average = sum/s;
    return average;
}

void print(int* p[],int& s){
    cout<<"Scores: "<<endl;
    for(short i=0;i<s;i++){
        cout<<*p[i]<<endl;
    }
}
