/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 23, 2017, 10:52 PM
 * Purpose:  Calculate the Tax Percentage and Profit Percentage of Gasoline
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f; //percentage calculation


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Initialize variables
    float FedTax = 0.184f; //federal tax
    float CAStTax = 0.380f; //California state tax
    float CAPTrTx = 0.100f; //California CAP and Trade Tax
    float CAStStx = 0.08f; // California State Sales Tax 
    float OilCoPr = 0.07f; // Oil company profit per gallon 
    float PumpPr, BasePr; //Pump price, Base price
    float PerTax, PerPrft; //Percentage tax, percentage profit
    
    //Input data
    cout << "Input the price of gas" << endl;
    cin >> PumpPr;
    
    //Map inputs to outputs or process the data
    BasePr = (PumpPr-CAStTax-CAPTrTx-FedTax)/(1+CAStStx);
    PerTax = (BasePr*CAStStx+FedTax+CAStTax+CAPTrTx/BasePr*PERCENT);
    PerPrft = OilCoPr/BasePr*PERCENT; 
    
    //Output the transformed data
    cout << "Federal Tax/gallon = $"<< FedTax << endl;
    cout << "California tax/gallon = $" <<CAStTax << endl;
    cout << " CAP and Trade Tax/Gallon = $" << CAPTrTx << endl;
    cout << "Base Price/Gallon = $" << BasePr << endl;
    cout << "Oil Company Profit/Gallon = $" << OilCoPr << endl;
    cout << "Total percentage Tax/Gallon = $" << PerTax << endl;
    cout << "Percentage Profit = $" << PerPrft << endl;
    
    //Exit stage right!
    return 0;
}

