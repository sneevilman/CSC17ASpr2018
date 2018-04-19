/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Purpose: Find data from a dynamic array
 * Created on March 14, 2018, 1:53 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

void fillAry(int [],int);
void prntAry(int[],int);
void destroy(int[]);
void stats(int[],int[],int);

int main(int argc, char** argv) {
    srand(static_cast<int>(time(0)));
    int num;
    cout<<"Enter a size for the array"<<endl;
    cin>>num;
    int* mode = new int[num];
    int* array = new int[num];
    fillAry(array,num);
    prntAry(array,num);
    stats(array,mode,num);
    destroy(array);
    return 0;
}

void fillAry(int a[],int n){
    
    for(short i=0;i<n;i++){
        a[i] = rand()%99+1;
    }
}

void destroy(int a[]){
    if(!a){
        delete[]a;
    }
}

void prntAry(int a[],int n){
    for(short i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void stats(int a[],int m[],int n){
    int sum(0),mode,freq(0),avg,median;
    for(short i=0;i<n;i++){
        sum+=a[i];
    }
    avg = sum/n;
    int* ptr[n];
    for(short i=0;i<n;i++){
        ptr[i]=&a[i];
    }
    for(short i=0;i<n-1;i++){
        for(short l=i+1;l<n;l++){
            if(*ptr[l]<*ptr[i]){
                *ptr[l]=*ptr[i]^*ptr[l];
                *ptr[i]=*ptr[i]^*ptr[l];
                *ptr[l]=*ptr[i]^*ptr[l];
            }
        }
    }
    
    cout<<endl;
    cout<<*ptr[0]<<" "<<*ptr[n-1]<<endl;
    
    int x=(*ptr[0]+*ptr[n-1])/2;      //x represents the middle number
    short z=x-a[0];             //z represents the difference between the current
    if(z<0){z*=-1;}             //number and the middle number
    for(short i=0;i<n;i++){
        short y=x-a[i];
        if(y<0){y*=-1;}
        if(y<z){
            z=y;
            median=a[i];
        }
    }
        cout<<"x: "<<x<<endl;
    
    m[0]=0;
        for(short i=0;i<n;i++){
            short pos=i;
            short f=1;
            if(freq>m[0]){
                m[0]=freq;
                m[1]=a[pos];
            }
            if(a[pos]==a[pos+f]){
                f++;
                i++;
                freq++;
            }else{freq=0;}
        }
    cout<<endl;
    prntAry(a,n);
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Mean: "<<avg<<endl;
    if(m[0]>0){cout<<"Mode: "<<m[1]<<" x"<<m[0]<<endl;}else cout<<"No mode"<<endl;
    cout<<"Median: "<<median<<endl;
    
}



