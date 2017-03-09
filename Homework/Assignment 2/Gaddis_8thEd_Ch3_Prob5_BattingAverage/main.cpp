/* 
 * File: Gaddis 8th Edition, chapter 3, problem 5
 * Author: Tristan Romero 
 * Created on 8 March 2017
 * Purpose: find a baseball players batting average   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float uptobat,//up to bat
            hits,//number of hits
            average;//batting average 
    
    //Input data
    cout<<"this program will calculate a batters bating average"<<endl;
    cout<<"enter amount of times the batter was up to bat "<<endl;
    cin>>uptobat;
    cout<<"enter total amount of hits landed by batter "<<endl;
    cin>>hits;
    
    //Map inputs to outputs or process the data
    average = (hits/uptobat);//average=hits divided by total times up to bat
    
    //Output the transformed data
    cout<<"the batters batting average is ";
    cout<<fixed<<showpoint<<setprecision(4)<<average<<endl;
    
    //Exit stage right!
    return 0;
}

