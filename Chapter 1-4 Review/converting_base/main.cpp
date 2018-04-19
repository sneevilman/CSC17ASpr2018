/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Purpose: convert bases
 * Created on February 28, 2018, 9:53 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float num=353.125;
    for(short i=0;i<6;i++){
        cout<<num-(num-num/8)<<endl;
        num/=8;
    }
    
    

    return 0;
}

