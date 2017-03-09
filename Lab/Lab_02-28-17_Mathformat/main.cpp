/* 
 * File:   main.cpp
 * Author: Tristan romero 
 * Created on February 28, 2017, 11:25 AM
 * Purpose:  Utilize math and formatting libraries
 */

//System Libraries Here
#include <iostream> //input - output library
#include <cmath>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist 

//User Libraries Here

//Global Constants 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float fuVal, //Future Value from savings $'s
            prsVal,//Present value in savings $'s
            invRate;//Investment Rate or Interest Rate 
    unsigned short numCPer;//Number of compounding periods (years)
    //initialize values 
    prsVal=4999.99;
    invRate=0.06f;
    numCPer=.72/invRate;//Rule of 72
    
    //Map inputs to outputs or process the data
    fuVal=prsVal*pow((1+invRate),numCPer);
    
    //output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"interest rate ="<<invRate*100<<"%"<<endl;
    cout<<"years left in savings = "<<setw(8)<<numCPer<<"(yrs)"<<endl;
    cout<<"Future value = $"<<setw(8)<<fuVal<<endl;
    
    //Map inputs to outputs or process the data
    fuVal=prsVal*exp(numCPer*log(1+invRate));
    
    //output the transformed data
    cout<<"Future value (exp & log) = $"<<setw(8)<<fuVal<<endl;
    
    //shows relationship between multiplication and logs with addition 
    float op1=4,op2=5,prod;
    prod=op1*op2;
    cout<<"product of "<<op1<<"*"<<op2<<"="<<prod<<endl;
    prod=exp(log(op1)+log(op2));
    cout<<"product of exp(log("<<op1<<")+log("<<op2<<"))="<<prod<<endl;
            
    
    //Exit
    return 0;
}

