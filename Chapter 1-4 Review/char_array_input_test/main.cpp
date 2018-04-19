/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on 11 March, 2018, 9:57 AM
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int,const char[],const char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],char replace[],char with[]){
int strcmp(char [],char [],const char [],const char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX]={};      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    
//    for(short i=0;i<ROW;i++){
//        for(short l=0;l<COLMAX;l++){
//            cout<<static_cast<int>(array[i][l]);
//        }
//        cout<<endl;
//    }
    
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    
    
    //Now read in the array of characters and determine its size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    for(short i=0;i<rowIn;i++){         //iterated input based on rowIn
        cin>>array[i];
    }
    
    colDet=read(array,rowDet);
    cout<<"colDet: "<<colDet<<endl;
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

int  read(char a[][COLMAX],int& r){
    short colDet(0);
    short colTemp(0);
    for(short i=0;i<r;i++){
        colTemp=0;
        for(short l=0;l<COLMAX;l++){
            if(a[i][l]!=0){
                colTemp++;
            }  
        }
        if(colTemp>colDet){
            colDet=colTemp;
        }
    }
    return colDet;
}

void sort(char a[][COLMAX],int r,int c,const char replace[],const char with[]){
    for(short i=0;i<r;i++){
        for(short l=i;l<c;l++){
            
        }
    }
}