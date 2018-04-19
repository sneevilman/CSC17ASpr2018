/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on February 27, 2018, 11:05 PM
 * Purpose: Binary sort an array of strings
 */

#include <iostream>  
#include <string>

using namespace std;

short bSrch(string[],short[],string,int);




 int main()  
 {      
     short ans;
     const int NNAMES = 20;
     short sub[NNAMES]={0};
     string lName[NNAMES],
             inp;
     string names[NNAMES] = 
         {"Collins, Bill", "Smith, Bart", "Allen, Jim",
         "Griffin, Jim", "Stamey, Marty", "Rose, Geri",                               
         "Taylor, Terri", "Johnson, Jill",                                    
         "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",                              
         "James, Jean", "Weaver, Jim", "Pore, Bob",                              
         "Rutherford, Greg", "Javens, Renee",                              
         "Harrison, Rose", "Setzer, Cathy",                              
         "Pike, Gordon", "Holland, Beth" };      
     
     
     for(short i(0);i<NNAMES;i++){
         sub[i]=i;
     }      //fills parallel subscript array
     
     for(short i(0);i<NNAMES+1;i++){
         short c=i;
     for(short l(c+1);l<NNAMES;l++){
         if (names[l].at(0)<names[c].at(0)){
             string temp;
             temp=names[l];
             names[l]=names[c];
             names[c]=temp;
             short tSub;
             tSub=sub[l];
             sub[l]=sub[c];
             sub[c]=tSub;
         }
     }
     }      //sorts string array
     
     cout<<"Input a search and our database will show you a name based on your search."<<endl;
     cin>>inp;                                          //input something to search for
     
     ans=bSrch(names,sub,inp,NNAMES);
     
     cout<<names[ans]<<endl;                            //outputs the name
     cout<<"Sorted Position: "<<ans+1<<endl;            //outputs position sub based on sorted array
     cout<<"Original Position: "<<sub[ans]+1<<endl;     //shows position sub based on unsorted array
     return 0;  
     
 }   
 
 short bSrch(string n[],short s[],string inp,int NNAMES){
     short beg=0,end=NNAMES-1,mid,pos=-1;
     bool found(0),
             checked(0);
     while(!found && beg<=end){         //determines when to stop based on flag and exhaustion
         mid=(beg+end)/2;
         checked=false;                 //sets the check flag
         short i=0;                     
         while(i<inp.length()&&checked==false){            //precision based on input
                if(n[mid].at(i)==inp.at(i)){    //checks characters in name vs input based on position
                    found=true;
                    if(i<4){checked=false;}else checked=true;
                }else if(n[mid].at(i)>inp.at(i)){
                    end=mid-1;checked=true;found=false;
                }else {beg=mid+1;checked=true;found=false;}
                i++;
                }
         }
     if(found==false){                                 //checks substr values against inp if binary was inconclusive
         for(short i=0;i<NNAMES;i++){
             if(n[i].find(inp) != std::string::npos){mid=i;}
         }
     }
     return mid;
 }