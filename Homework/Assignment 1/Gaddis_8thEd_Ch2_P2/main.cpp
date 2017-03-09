/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 8:10 PM
 * Purpose: Calculate the sales a division of a company produces for said 
 *          Company.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
    
    int Compny = 4600000, // Company made $4,600,000 in sales
            ECSales = Compny * .62; // East Coast Sales division's total sales 
                   // is calculated by the total company sales multiplied by %62
            
    
            
    cout << "East Coast Sales Division of a company makes $";
    cout << ECSales << "in total" << endl;
    
     //Exit stage right!
    return 0;
}

