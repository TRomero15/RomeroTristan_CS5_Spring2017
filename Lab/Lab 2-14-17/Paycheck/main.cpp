


/* 
 * File:   main.cpp
 * Author: Tristan Romero

 
 
 * Created on February 14, 2017, 11:33 AM
 * Purpose: Calculate Gross pay
 */
 // System libraries 
#include <iostream>   // Input - Output Library 
using namespace std;  // Name-space under which system libraries exist 

//User libraries 

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare Variables
    float payChk, //Paycheck in $'s
          hrsWrkd,//Hours worked in hours 
          payrate;//Pay rate in $'s/hour
    
    //initialize variables
    hrsWrkd=40;
    payrate=10;
  
    //Map inputs to outputs or process the data
    payChk=hrsWrkd*payrate;
    
    //Output the transformed data
    cout<<"Hours Worked = "<<hrsWrkd<<" (hrs)"<<endl;
    cout<<"Pay Rate = $"<<payChk<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    
    //Exit stage right :

    return 0;
}

