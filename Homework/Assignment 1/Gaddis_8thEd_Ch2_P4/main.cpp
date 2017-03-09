/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 8:45 PM
 * Purpose: DIsplay the meal cost, tax amount, tip amount, and total bill.  
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
    
    int Meal = 44.50, // meal cost is $44.50
            Tax = .0675 * Meal, // Tax= 6.75% * meal cost
            Tip = .15 * Meal, // .tip cost= 15% * meal cost
            Total = Meal + Tax + Tip; //total cost= sum of meal,tax,and tip cost
    
    cout << "The meal cost is $" << Meal << endl;
    cout << "The Tax amount is $" << Tax << endl;
    cout << "The tip amount is $" << Tip << endl;
    cout << "The Total bill amount is $" << Total << endl;
    
    
    //Exit stage right!
    return 0;
}

