/* 
 * File:   main.cpp
 * Author: Tristan Romero
 * Created on March 7th 2017
 * Purpose:  Calculate # of candy bars
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    char sex;//M or F
    unsigned short ht,wt,age;//height (in), weight(lbs), age(yrs)
    unsigned char cdyCals=230;//Candy bar calories 
    float bmr;//Basic Metabolic Rate (calories)
    int nCdyBrs;//Number of candy bars we can eat
    
    
    //Input data
    cout<<"this program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your sex(M/F), Wt(lbs),Ht(in),Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //map inputs to outputs
    bmr= (sex=='M')?
        66 + 6.3f*wt + 12.9f*ht + 6.8f*age:
        655 + 4.3f*wt + 4.7f*ht + 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    
    //Output the transformed data
    cout<<"The number of candy bars you can eat = "<< nCdyBrs << endl;        
   

    //Exit
    return 0;
}

