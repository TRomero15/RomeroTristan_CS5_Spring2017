/* 
 * File:   main.cpp
 * Author: Tristan Romero
 * Created on February 23, 2017, 11:34 PM
 * Purpose:  Calculate the per person debt and percentage increase
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Global Constants
const float PERCENT=100.0f; // Percentage
const float MILLION=1.0e6f; // Conversion to Billions
const float TRILION=1.0e12f; // Conversion to Trillions

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float FDt2008 = 9.7e12f;    //9.7 Trillion $'s 2008 Federal debt
    float FDt2016 = 20.e12f;    //20. Trillion $'s 2016 Federal debt
    float Pop2008 = 304e6f;     //304 Million  Population in 2008
    float Pop2016 = 322e6f;     //322 Million  Population in 2016
    float Per2008,Per2016;    //Personal Debt
    float PerChng,MulChng;    //Percentage and multiplicative change
    float PPChng;             //Per person change in debt
    
    //Map inputs to outputs or process the data
    Per2008 = FDt2008/Pop2008;
    Per2016 = FDt2016/Pop2016;
    PerChng = (FDt2016-FDt2008)/FDt2008*PERCENT;
    MulChng = FDt2016/FDt2008;
    PPChng = (Per2016-Per2008)/Per2008*PERCENT;
    
    //Output the transformed data
    cout << "Federal Debt 2008  = $" <<FDt2008/TRILION<< "trillion" << endl;
    cout << "Federal Debt 2016  = $" <<FDt2016/TRILION<< "trillion" << endl;
    cout << "US Population 2008 =  " <<Pop2008/MILLION<< "million" << endl;
    cout << "US Population 2016 =  " <<Pop2016/MILLION<< "million" << endl;
    cout << "Percentage change in debt     = " <<PerChng<< "%" << endl;
    cout << "Multiplicative change in debt = " <<MulChng<< "x" << endl;
    cout << "Per person debt in 2008 = $" <<Per2008<< endl;
    cout << "Per person debt in 2016 = $" <<Per2016<< endl;
    cout << "Per person % change in debt = " <<PPChng<< "%" <<endl;
    
    //Exit stage right!
    return 0;
    
}