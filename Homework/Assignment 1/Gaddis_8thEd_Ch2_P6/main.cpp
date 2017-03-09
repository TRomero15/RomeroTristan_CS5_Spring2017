/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 8:56 PM
 * Purpose: Calculate the MPG of a car
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist


int main(int argc, char** argv) {
    
    int Tank = 16, //Car tank has 16 gallons
            Travel = 350, // Car can travel 3650 miles on a full tank
            MPG = Travel / Tank; // MPG=total travel/ gas tank
    
            
    cout << "The MPG of a car is";
    cout << MPG << "miles" << endl;
    
    
    
    //Exit stage right!
    return 0;
}

