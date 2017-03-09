/* 
 * File: Gaddis chapter 3, problem 11
 * Author: Tristan Romero 
 * Created on 7 March 2017
 * Purpose: Convert Celsius temperatures to Fahrenheit temperatures.  
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
    double celsius,
            fhrheit;//Fahrenheit
    
    
    //Input data
    cout<<"this program converts the Celsius temperature ";
    cout<<"to Fahrenheit temperature "<<endl;
    cout<<"enter the temperature in Celsius here "<<endl;
    cin>>celsius;
    
    //Map inputs to outputs or process the data
    fhrheit = (9/5 * celsius) + 32; //Fahrenheit conversion formula
    
    //Output the transformed data
    cout<<"the Celsius temperature converted into Fahrenheit ";
    cout<<"equates to "<<fhrheit<<endl;
    
    //Exit stage right!
    return 0;
}

