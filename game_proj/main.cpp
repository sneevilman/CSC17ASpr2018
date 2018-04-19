/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on March 12, 2018, 7:55 AM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

struct chr{
        string name;
        short chrClss;      //type of character - determines skills, traits, stats
        int gold;           //amount of currency
        short level;        //current level - player's/enemy's abilities
        int exp;            //current experience points - used to determine level of player or experience rewarded from enemies
        short items[10]={0};  //item slots, with identifiers pointing to item classes
            short hp,       //max health points
                str,        //strength - used to determine damage, weapon size, speed penalty from weight
                spd,        //speed - used to determine turn order, avoid chance, critical hit chance
                skl,       //skll - used to determine hit chance, weapon complexity, trigger chance for certain skills
                def,        //defense - used to determine damage reduction from attacks
                lck,        //luck - influences a number of random outcomes, such as treasure, encounter difficulty, avoid chance, critical hit chance
                wep,        //weapon
                arm;        //armor
    
        
    };          //character structure
    const int SPEC[10][8]=          //table of preset values for characters - hp, str, spd, skl, def, lck, armor, weapon    
    //hp,str,spd,skl,def,lck,wep,arm
    {7,5,5,5,5,0,1,1,                //knight
     5,5,5,5,5,0,2,2,                //mage
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0,
     0,0,0,0,0,0,0,0};   
//Function Prototypes Here
void chrCr(chr &);
void clsFill(chr &,short);
//Program Execution Begins Here
int main(int argc, char** argv) {
    
    srand(static_cast<int>(time(0)));
    
    
    chr player;
    chrCr(player);
    cout<<"HP: "<<player.hp<<endl;
    cout<<"str: "<<player.str<<endl;
    cout<<"spd: "<<player.spd<<endl;
    cout<<"skl: "<<player.skl<<endl;
    cout<<"def: "<<player.def<<endl;
    cout<<"lck: "<<player.lck<<endl;
    cout<<"wep: "<<player.wep<<endl;
    cout<<"arm: "<<player.arm<<endl;
    
    
    
    
    //Exit
    return 0;
}
void chrCr(chr& p){
    short chs(0);
    cout<<"Pick a class:\n"
          "1. Knight\n"
          "2. Mage"<<endl;
    while(chs<1||chs>2){
        cout<<"Input 1 or 2"<<endl;
        cin>>chs;
    }
    clsFill(p,chs-1);         //set the stats/skills for the char based on class
}

void clsFill(chr& p,short c){
    
    p.hp=5*(rand()%5+SPEC[c][0]);
    p.str=(rand()%5+SPEC[c][1]);    
    p.spd=(rand()%5+SPEC[c][2]);
    p.skl=(rand()%5+SPEC[c][3]);
    p.def=(rand()%5+SPEC[c][4]);
    p.lck=(rand()%10+SPEC[c][5]);
    p.wep=(SPEC[c][6]);
    p.arm=(SPEC[c][7]);
    
}