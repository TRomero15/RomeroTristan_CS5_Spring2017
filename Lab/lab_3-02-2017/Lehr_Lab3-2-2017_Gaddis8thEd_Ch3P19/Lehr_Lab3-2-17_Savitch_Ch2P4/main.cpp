/* 
 * File:   SAVITCH cHAPTER 2 Problem 4
 * Author: Tristan Romero
 * Created on 2 March 2017
 * Purpose: Calculate Loan Parameters 
 */

//System Libraries
#include <iostream>
#include <iomanip> //format library
using namespace std;

//User Libraries Here

//Global Constants 

const float PERCENT=100.0f;//percent conversion
const float CNVYRMN=12.0f;//Years to Months

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    float faceVal,//Loan face value
            consRec,//what the consumer receives $'s
            mthPay;//Monthly payment $'s
    int intRate,//Yearly percentage interest Rate 
            nMonths;//Number of months in the loan 
    
    //Input data
    cout<<"this program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs 
     faceVal=consRec/(1-intRate/PERCENT/CNVYRMN*nMonths); 
    mthPay=faceVal/nMonths;
    
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount recieved = $"<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face value of the loan = $"<<faceVal<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;

    //Exit
    return 0;
}

