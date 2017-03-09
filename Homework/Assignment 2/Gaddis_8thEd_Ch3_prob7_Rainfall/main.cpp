/* 
 * File: Gaddis chapter 3, problem 7
 * Author: Tristan Romero 
 * Created on March 7, 2017
 * Purpose: Calculate the average monthly rainfall for three months.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1,//first month
            month2,//second month
            month3;//third month
    float rainMt1,//amount of rain that fell during the first month
            rainMt2,//amount of rain that fell during the second month
            rainMt3,//amount of rain that fell during the third month
            aveRain;//average rainfall overall
    
    //Input data
    cout<<"this program calculates the average amount of rainfall";
    cout<<"for three months"<<endl;
    cout<<"type name of first month here "<<endl;
    cin>>month1;
    cout<<"type the amount of rain that fell ";
    cout<<"in inches for "<<month1<<" here"<<endl;
    cin>>rainMt1;
    cout<<"type name of second month here "<<endl;
    cin>>month2;
    cout<<"type the amount of rain that fell ";
    cout<<"in inches for "<<month2<<" here"<<endl;
    cin>>rainMt2;
    cout<<"type name of third month here "<<endl;
    cin>>month3;
    cout<<"type amount of rain that fell ";
    cout<<"in inches for"<<month3<<" here"<<endl;
    cin>>rainMt3;
    
    //Map inputs to outputs or process the data
    aveRain = (rainMt1+rainMt2+rainMt3)/3; //average rainfall formula
    
    //Output the transformed data
    cout<<"average rainfall overall for the three months is "<<aveRain<<endl;
    
    //Exit stage right!
    return 0;
}

