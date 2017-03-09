/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on March 7, 2017
 * Purpose: Calculate a car's gas mileage 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int gallons,
            miles,
            mpg; //miles per gallon
    
   //Input data
    cout<<"This program calculates a car's miles per gallon"<<endl;
    cout<<"type in the number of gallons your car can hold"<<endl;
    cin>>gallons;
    cout<<"type in the number of miles the car can be driven";
    cout<<"on a full tank"<<endl;
    cin>>miles;
    
    //Map inputs to outputs or process the data
    mpg = miles/gallons;
    
    //Output the transformed data
    cout<<"This car has a total of "<< mpg << "miles per gallon" <<endl;
    
    //Exit stage right!
    return 0;
}

