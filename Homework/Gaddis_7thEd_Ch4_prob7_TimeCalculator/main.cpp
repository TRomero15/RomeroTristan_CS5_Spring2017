/* 
 * File: Gaddis 7th edition, chapter 4 problem 7, time calculation
 * Author: Tristan Romero
 * Created on 14 March 2017
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int MINUTE=60;//how many seconds in a minute
const int HOUR=60*MINUTE;//how many seconds in an hour
const int DAY=24*HOUR;//how many seconds in a day
const int WEEK=7*DAY;//how many seconds in a week
const int YEAR=52*WEEK;//how many seconds in a year



//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    int nSecs;//number of seconds to convert 
    int nYrs,nMnths,nWks,nDys,nHrs,nMin;
    
    //Input or initialize values Here
    cout<<"Program converts seconds to years/Months/Weeks/Days/Hours"<<endl;
    cout<<"input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs
    nYrs=nSecs/YEAR;       //number of years
    cout<<nYrs<<" Years";
    nSecs-=nYrs*YEAR;     //subtract the yearly seconds from remaining 
    
    nWks=nSecs/WEEK;       //number of weeks
    cout<<nWks<<" Weeks";
    nMnths=nWks*3/13;      //convert number of weeks to months
    cout<<nMnths<<" Months";
    nSecs-=nWks*WEEK;      //subtract the weekly seconds from remaining
    
    nDys=nSecs/DAY;      //number of days
    cout<<nDys<<" Days";
    nSecs-=nDys*DAY;     //subtract the daily seconds from remaining
    
    nHrs=nSecs/HOUR;     //number of hours 
    cout<<nHrs<<" Hours";
    nSecs-=nHrs*HOUR;    //subtract the hourly seconds from remaining
    
    nMin=nSecs/MINUTE;     //number of minutes
    cout<<nMin<<" Minutes";
    
    nSecs-=nMin*MINUTE;      //remaining number of seconds 
    cout<<nSecs<<" Seconds";
    
            
            
            
    
   

    //Exit
    return 0;
}

