 /*
 * File: Gaddis, Chapter 3, problem 2
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose: write a program that asks how many tickets of each section was sold
 and that displays the amount of income generated. 
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <iomanip>         
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int classC = 9.00, //class C seats cost $9
            classB = 12.00,//class B seats cost $12
            classA = 15.00;//class A seats cost $15
    
    int soldC,//Class C tickets sold
            soldB,//class B tickets sold
            soldA,//class A tickets sold
            revenue;//total revenue generated
    
    //Input data
    cout<<"this program calculates how much revenue ";
    cout<<"each seat class generated in $"<<endl;
    cout<<"Type amount of Class C tickets sold "<<endl;
    cin>>soldC;
    cout<<"type amount of class B tickets sold "<<endl;
    cin>>soldB;
    cout<<"type amount of class A tickets sold "<<endl;
    cin>>soldA;
    
    //Map inputs to outputs or process the data
    revenue = (classC*soldC)+(classB*soldB)+(classA+soldA);
    
    //Output the transformed data
    cout<<"the total revenue generated is "<<revenue<<"$"<<endl;
            
    //Exit stage right!
    return 0;
}

