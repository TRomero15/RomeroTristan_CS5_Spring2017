/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 8:30 PM
 * Purpose: calculate the total sales tax of a purchase.    
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
    
    int Price = 52.0,
            StateTx = .04 * Price, // State tax=4%* purchase price
            CountyTx = .02 * Price, //County tax=2% * purchase price
            TotlTax = StateTx + CountyTx; // total tax= state tax and county tax 
                                          // added together
    
    cout << "Purchase total is $" << Price << endl;
    cout << "State Tax is $" << StateTx << endl;
    cout << "County Tax is $" << CountyTx << endl;
    cout << "Total Tax is $" << TotlTax << endl;
    
    
  
    
    //Exit stage right!
    return 0;
}

