/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 9:50 PM
 * Purpose: Calculate the distance a car can travel with one tank of gas 
 *          both in town and on the freeway
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
   
    int Tank = 20, // car tank is 20 gallons
            TownMPG = 21.5, //  Town MPG is 21.5 miles
            FreeMPG = 26.8, //Freeway MPG is 26.8 miles
            TwnDist = Tank * TownMPG, //town distance=Tank * TownMPG
            FreeDis = Tank * FreeMPG; //Freeway distance=Tank * FreeMPG
    
    
    cout << " With one tank of gas this car can travel";
    cout << TwnDist << "in town" << endl;
    cout << "With one tank of gas this car can travel";
    cout << FreeDis << "on the freeway" << endl;
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

