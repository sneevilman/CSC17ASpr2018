/*
 Author: Caeleb Moeller
 Created on March 14, 2018, 1:18 AM
 Purpose: ¯\_(ツ)_/¯*/


#include <iostream>

using namespace std;

void sort(int*[],int);
void prntAry(const int[],int);
void ptrPrnt(int*[],int);

int main(int argc, char** argv){
    int num;
    cout<<"Input the number of donations"<<endl;
    cin>>num;
    int* don = new int[num];
    int *arrPtr[num];
    
    cout<<"Enter the donation values"<<endl;
    for(short i=0;i<num;i++){
        cin>>don[i];
    }
    
    for(short i=0;i<num;i++){
        arrPtr[i] = &don[i];
    }
    
    
    sort(arrPtr,num);
    ptrPrnt(arrPtr,num);
    prntAry(don,num);

    delete [] don;
    return 0;
}


void sort(int* p[],int n){
    for(int i=0;i<n-1;i++){
    int pos=i;
    for(int i=pos+1;i<n;i++){
        if(*p[pos]>*p[i]){
            int* temp;
            temp=p[pos];
            p[pos]=p[i];
            p[i]=temp;
  }
  }
    }
}

void prntAry(const int d[],int n){
    cout<<"The Original Order of Donations"<<endl;
    for(short i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

void ptrPrnt(int* p[],int n){
    cout<<"The sorted order of donations"<<endl;
    for(short i=0;i<n;i++){
        cout<<*p[i]<<" ";
    }
    cout<<endl;
}