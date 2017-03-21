/* 
 * File: Gaddis Chapter 4, poblem 3, magic dates
 * Author: Tristan Romero 
 * Created on 18 March 2017
 * Purpose: write a program that asks user to enter a month, a day, and year.
 *          program should then determine whether the month times the day is 
 *          equal to the year. If so, program should display message saying
 *          "date is magic". 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int month,
            day,
            year;
    
    //Input data
    cout<<"this program will ask you to enter a date";
    cout<<" then the program will determine if the month times the year";
    cout<<" equals the year or not."<<endl;
    cout<<" enter month here ";
    cin>>month;
    cout<<" enter day here ";
    cin>>day;
    cout<<" enter year here ";
    cin>>year;
    
    //Map inputs to outputs or process the data
    if (year == month*day)
        cout<<" the date entered is magical"<<endl;
    else cout<<"the date is not magical "<<endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

