/* 
 * File:   main.cpp
 * Author: Tristan Romero
 * Created on February 16th, 2017, 11:30 AM
 * Purpose:  Calculate the sum and product of 2 integers
 */

//System Libraries
#include <iostream> //Input - Output Library 
#include <cstdlib> //Random number generator 
#include <ctime> //Time Library to seed the random number generator 
using namespace std; //name-space under which system libraries exist

//User Libraries 

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    short op1, op2, sum,prod;
    
    //Initialize variables
    op1=rand()%90+10;//[10-99]
    op2=rand()%90+10;//[10-99]
    
    //input data
    
    //map inputs to outputs or process the data 
    sum=op1+op2;
    prod=op1*op2;
    
    //Output the transformed data
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
            
  //Exit stage right!
    return 0;
}

