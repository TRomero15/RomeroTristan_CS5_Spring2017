/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 *Created on February 16, 2017, 12:10 PM
 *Purpose: Convert acres to ft^2,miles^2
 */

//Systems Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constrants
const float CNVACFT=43560; //1 Acre = 43560 sq feet
const float CNVMIFT=1.0/5280;//1 Mile = 5280 ft

//Function Prototypes 

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float acres,ftsq,milesq;
    
    //Initialize Variables
    acres=640.0f;//Number of acres
    
    //Map inputs to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVMIFT*CNVMIFT;
            
    //Output the transformed data
    cout<<acres<<" Acres "<<ftsq
            <<" ft^2 = "<<milesq<<" miles^2"<<endl;
    
    //Exit stage right!

    return 0;
}

