/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 9:27 PM
 * Purpose:   Calculate the gross pay for an employee's checks 
 *            if he were paid bi-weekly or twice a month. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
    
    int Annual = 32500,
            HlfMont = Annual / 24, // gross pay if paid twice a month
            BiWeek = Annual / 26; // gross pay bi-weekly
    
    cout<<"This employee would get paid $";
    cout << HlfMont << "twice a month" << endl;
    cout<< "this employee would get paid $";
    cout<< BiWeek << "bi-weekly" << endl;
    
    return 0;
}

