/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on March 12, 2018, 7:55 AM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    struct chr{
        string name;
        short chrClss;      //type of character - determines skills, traits, stats
        int gold;           //amount of currency
        short level;        //current level - player's/enemy's abilities
        int exp;            //current experience points - used to determine level of player or experience rewarded from enemies
        const short int SIZE = 10;
        short items[SIZE]={0};  //item slots, with identifiers pointing to item classes
        struct stats{       //character statistics
            short hp,       //max health points
                str,        //strength - used to determine damage, weapon size, speed penalty from weight
                spd,        //speed - used to determine turn order, avoid chance, critical hit chance
                skil,       //skill - used to determine hit chance, weapon complexity, trigger chance for certain skills
                def,        //defense - used to determine damage reduction from attacks
                lck;        //luck - influences a number of random outcomes, such as treasure, encounter difficulty, avoid chance, critical hit chance
        };
        struct equip{
            short head,     //head wear, adds to weight and defense
                 chest,     //torso wear, adds to weight and defense
                  arms,     //arm wear, adds to weight and defense
                  legs,     //leg wear, adds to weight and defense
                  feet,     //footwear, adds to weight and defense
                  weapon,   //weapon of attack, factors into hit chance/weight/damage
                  shield,   //adds to defense and avoid
                  acc;      //accessory (gives various effects
        };
    
    
    
    
    
    
    };          //character structure
    
    
    struct player{
        string name;
        chr pChr;
    };
    
    //Exit
    return 0;
}