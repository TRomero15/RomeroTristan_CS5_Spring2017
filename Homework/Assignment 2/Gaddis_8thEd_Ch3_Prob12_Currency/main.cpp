/* 
 * File:   Gaddis 8th edition, chapter 3, problem 12
 * Author: Tristan Romero 
 * Created on 8 March 2017
 * Purpose:Convert the Japanese yen and the Euro to American dollars.   
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const float yPusd = 114.07,//yen per US dollars = 114.07
            ePusd = .95;//euros per US dollar = .95
    float yen,//japanese yen
            euros,
            usd;//United States Dollar
    
    //Input data
    cout<<"this program will convert japanese yen and euros ";
    cout<<"to US dollars"<<endl;
    cout<<"enter US dollar amount here to convert to yen and euros "<<endl;
    cin>>usd;
    
    //Map inputs to outputs or process the data
    yen = (usd*yPusd);//yen=usd multiplied by yen per US dollar
    euros = (usd*ePusd);//euros=usd multiplied by euros per US dollar
    
    //Output the transformed data
    cout<<"$"<<usd<<"is equivalent to "<<yen<<"yen"<<endl;
    cout<<"$"<<usd<<"is equivalent to "<<euros<<"euros"<<endl;
    
    //Exit stage right!
    return 0;
}

