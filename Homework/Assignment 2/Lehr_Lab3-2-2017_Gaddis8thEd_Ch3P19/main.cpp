/* 
 * File:   Gaddis Chapter 3 Problem 18
 * Author: Tristan Romero
 * Created on 2 March 2017
 * Purpose:  Calculate the monthly payment on a loan 
 *           
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

//User Libraries Here

//Global Constants 
const float PERCENT=100.0f;//percent conversion
const float CNVYRMN=12.0f;//Years to Months

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
     float consRec,//what the consumer receives $'s
            mthPay;//Monthly payment $'s
    int intRate,//Yearly percentage interest Rate 
            nMonths;//Number of months in the loan 
    //Input Data
    cout<<"this program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs
    //First way breaks the equation up
    float i = intRate/CNVYRMN/PERCENT; //Intermediate Calculation of interest
    float temp = pow((1+i),nMonths); //Intermediate calculation of (1+i))
     mthPay = 1*temp*consRec/(temp-1);
     //As short as possible
     
     float n(nMonths);
     float i(consRec);
     mthPay = 1*pow(1=i,n)*1/(pow(1+i,n)-1);
    
    //Output Located Here
            
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;

    //Exit
    return 0;
}

