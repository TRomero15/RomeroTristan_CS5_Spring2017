/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose: Product of 1 to N
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize  variables
    int n,//factorial
            prod=1;//product
           
            
    //input data
            cout<<" input a factorial "<<endl;
    cin>>n;
    
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    
    //Output the transformed data
    cout<<" product = "<<prod<<endl;
    //Exit stage right!
    return 0;
}

