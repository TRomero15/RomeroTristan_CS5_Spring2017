/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose: Sum of a factorial 1+1/1+1/2...1/n
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //solve the first part
    int n,fact=1; //factorial
           
    cout<<" first part calculate N! "<<endl;
    cout<<" type in N "<<endl;
    cin>>n;
    
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    
    cout<<n<<"! = "<<fact<<endl;
    
    //solve second part
    float x;
    cout<<endl<<"second part , calculate e^x"<<endl;
    cout<<" type in x "<<endl;
    cin>>x;
    float etox=1;
    for(int n=1;n<=13;n++){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        etox+=pow(x,n)/fact;
    }
    cout<<"e"<<x<<" = "<<etox<<endl;
     //All in one working line of code
    cout<<endl<<"third part, all in one line"<<endl;
    float ex=1.0f, tol=1e-7f;
    for(float i=1.0f,term=1.0f;  term>=tol;  term*=(x/i), ex+=term, i++);
    cout<<" e "<<x<<" + "<<ex<<endl;
    //Exit stage right!
    return 0;
}

