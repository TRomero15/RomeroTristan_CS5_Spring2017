/* 
 * File:  Gaddis, 8th edition, chapter 4, problem 9, Software sales.
 * Author: Tristan Romero 
 * Created on 19 March 2017
 * Purpose: write a program that asks for the amount of software units purchased
 *          and that calculates the total cost of the purchase.  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int units; //software units
    const double price=99;//retail price for one unit is $99
    double retCost,// retail price without sale reductions
           totCost;//total cost of units bought
    
    
    //Input data
    cout<<"this program asks for how many units you bought ";
    cout<<"and calculates the total cost of the purchase "<<endl;
    cout<<"enter how many units you purchased here ";
    cin>>units;
    
    //Map inputs to outputs or process the data
    if (units>0)
    {retCost=(units * price);
    cout<<fixed<<showpoint<<setprecision(2);}
    else if (units>=10&&units<=19)
    {totCost=retCost-(retCost*.2);
    cout<<"the total cost of the software purchase is $ "<<totCost<<endl;}
    else if (units>=20&&units<=49)
    {totCost=retCost-(retCost*.3);
    cout<<"the total cost of the software purchase is $ "<<totCost<<endl;}
    else if (units>=50&&units<=99)
    {totCost=retCost-(retCost*.4);
    cout<<"the total cost of the software purchase is $ "<<totCost<<endl;}
    else if (units>=100)
    {totCost=retCost-(retCost*.5);
    cout<<"the total cost of the software purchase is $ "<<totCost<<endl;}
    else
        cout<<"total cost of the software purchase is $ "<<retCost<<endl;
    
    //Exit stage right!
    return 0;
}

