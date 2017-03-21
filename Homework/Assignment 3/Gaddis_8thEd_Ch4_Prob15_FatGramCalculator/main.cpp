/* 
 * File:   Fat Gram Calculator 
 * Author: Tristan Romero 
 * Created on 19 March 2017
 * Purpose:  write a program that asks for the number of calories and fat grams
 *           in a food. Program should display the total percentage of calories 
 *           that come from fat . if percentage is less than 30% then program
 *           should display a message saying the food is low in fat. 
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
    double fatCal,//calories from fat
            ftGrams,//fat grams
            totlCal,//total calories
            ftCalPr;//calories from fat percentage
    
    //Input data
    cout<<" this program asks for the number of calories";
    cout<<" and fat grams in a food "<<endl;
    cout<<" enter the total number of calories the food has here ";
    cin>>totlCal;
    cout<<" enter the amount of fat grams in the food here ";
    cin>>ftGrams;
    
    //Map inputs to outputs or process the data
    fatCal=ftGrams*9;//calories from fat = fat grams * 9
    ftCalPr=(fatCal/totlCal)*100;//calories from fat divided by total calories
    
    //output the transformed data
    if (totlCal>=0 && ftGrams>=0)
    {
        if (fatCal<totlCal)
        {
           cout<<" the total amount of calories from fat is ";
           cout<< ftCalPr <<" % "<<endl;
           if (ftCalPr<30)
               cout<< " the food is low in fat "<<endl;
        }
        else cout<<"error, the calories and fat grams";
        cout<<" must not be below 0"<<endl;
    }
            
    
    
    
    
    //Exit stage right!
    return 0;
}

