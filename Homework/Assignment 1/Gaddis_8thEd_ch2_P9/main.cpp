/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 9:18 PM
 * Purpose:   Calculate the selling price of a circuit board that costs 
 *            $12.67 to produce. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
  
    int Cost = 12.67, //Circuit board production cost is $12.67
            Profit = .4, //company sells their circuits for 40% profit
            ProfCost = .4 * 12.67, //Profit cost=40% * 12.67
            Price = Cost + ProfCost; //selling price is production cost + profit 
                                     //cost
    cout<< "the selling price of a circuit board is = $" << Price << endl;
   
   //Exit stage right!
    return 0;
}

