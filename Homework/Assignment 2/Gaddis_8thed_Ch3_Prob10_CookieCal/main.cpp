/* 
 * File: Gaddis 
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose: calculate how many calories a person consumed from cookies 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
     int calCook = (300*10)/40, //calories per cookie = (300*10)/40
     cookCon,//cookies consumed
            totlCal;//total calories consumed 
    
   //Input data
    cout<<"this program calculates how many total calories ";
    cout<<"a person consumed"<<endl;
    cout<<"type how many cookies the person ate here"<<endl;
    cin>>cookCon;
    
    //Map inputs to outputs or process the data
    totlCal = (cookCon*calCook);//cookies consumed*servings = total calories 
    
    //Output the transformed data
    cout<<"the total amount of calories is "<<totlCal<<endl;
    
    //Exit stage right!
    return 0;
}

