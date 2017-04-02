/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on 30 March 2017
 * Purpose: Display the Ascii character set
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare the ascii lomit 
    int limit=127;
   
    //Map inputs to outputs or process the data 
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    //Exit stage right!
    return 0;
}

