/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Purpose: Test Zipf's Law
 * Created on March 15, 2018, 12:53 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    ifstream in;
    vector<string> word;
    int i=0;
    in.open("zipf.txt");
    while(in){
        in>>word[i];
        i++;
    }
    
    for(int l=0;l<10;l++){
        cout<<word[l]<<endl;
    }
    
    in.close();
    return 0;
}

