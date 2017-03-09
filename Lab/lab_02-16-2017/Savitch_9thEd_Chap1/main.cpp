/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on february 16, 2016,12:30 AM
 * Purpose:  Template to be utilized in creating
 *           Solutions to problems with free fall per secon
 * 
 */

//System Libraries Here
#include <iostream> //Input - output library
using namespace std; //Name-space under which system libraries exist

//User Libraries Here

//Global Constants
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level ft/sec^2

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float time,distnce;
    
    //Initialize Variables
    time=1.0f;
    
    //Map inputs to outputs or process the data
    distnce=GRAVITY*time*time/2;//Result in ft
    
    //Output the transformed data
    cout<<" Free fall of "<<time<< " secs = "<<distance<<" ft "<<endl;
            
    //Exit stage right!
    
    return 0;
}

