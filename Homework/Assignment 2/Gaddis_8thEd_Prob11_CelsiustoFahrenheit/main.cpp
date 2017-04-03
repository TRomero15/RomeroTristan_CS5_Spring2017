/* 
 * File: main.cpp
 * Author: Tristan Romero 
 * Created on 2 April 2017
 * Purpose: display a table of the Celsius temperatures from 0 to 20 
 *          and their Fahrenheit equivalents. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float celsius, //Celsius 
            fhrheit;//Fahrenheit
    
    
    //Input data
    cout<<" Display a table of the Celsius temperatures from 0 to 20 "<<endl;
    cout<<" and their Fahrenheit equivalents "<<endl;
    cout<<" Celsius                Fahrenheit"<<endl;
    cout<<" ---------------------------------"<<endl;
        
    
    //loop and display Celsius and Fahrenheit temperatures 
        for(celsius=0;celsius<=20;celsius++)
        {
            fhrheit=(9/5 * celsius)+32;//Fahrenheit conversion formula
            cout<<right<<setw(10)<<celsius;
            cout<<setw(10)<<fhrheit<<endl;
        }
        cout<<endl;
   //Exit stage right!
    return 0;
}

