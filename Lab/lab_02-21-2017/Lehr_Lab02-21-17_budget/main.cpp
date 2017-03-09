/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 23, 2017, 9:26 PM
 * Purpose: Calculate the budget percentage for NASA and the military.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist


//Global Constants
const float PERCENT = 100.0f; //percentage
const float BILLION = 1.0e9f; //conversion to billions
const float TRILION = 1.0e12f; //conversion to trillions


//Execution begins here
int main(int argc, char** argv) {
  
    //Initialize variables
    float FedBud = 3.54e12f; //3.54 trillion $'s 2016 Fed Budget
    float MilBud = 0.58e12f; //580 billion $'s 2016 DOD budget
    float NASABud = 18.5e9f; //18.5 billion $'s 2016 NASA budget
    float PerMil,PerNASA; //percentage budget
  
    //Map inputs to outputs or process the data
    PerMil = MilBud/FedBud*PERCENT;
    PerNASA = NASABud/FedBud*PERCENT;
            
    //Output the transformed data
    cout << "Federal budget = $" << FedBud/TRILION << "trillion" << endl;
    cout << "Military budget = $" << MilBud/BILLION << "billion" << endl;
    cout << "NASA budget = $" << NASABud/BILLION << "billion" << endl;  
    cout << "Military budget percentage = " << PerMil << "%" << endl;
    cout << "NASA budget percentage = " << PerNASA << "%" << endl;
            
    
    //Exit stage right!
    return 0;
}

