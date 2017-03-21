/* 
 * File: Gaddis Chapter 4, Minumum/Maximum
 * Author: Tristan Romero 
 * Created on 18 March 2017
 * Purpose: Write program that asks user to input 2 numbers, program should 
 *          also use the conditional operator to determine the smaller and 
 *          larger number. 
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
    float num1, //first number
            num2; //second number 
    
    //Input data
    cout<<"enter two numbers and the program will determine";
    cout<<" which is bigger and which is smaller"<<endl;
    cout<<"enter first number here ";
    cin>>num1;
    cout<<"enter second number here ";
    cin>>num2;
    
    //Map inputs to outputs or process the data
    if (num1 > num2)
        cout<<num1<<" is larger than second number "<<num2<<endl;
    else cout<<num2<<" is larger than first number "<<num1<<endl;
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

