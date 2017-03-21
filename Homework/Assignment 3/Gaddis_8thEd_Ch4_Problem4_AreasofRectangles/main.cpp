/* 
 * File:  Gaddis 8th edition, chapter 4, problem 4, areas of rectangles
 * Author: Tristan Romero 
 * Created on 19 March 2017
 * Purpose: write a program that asks for the length and width 
 *          of two rectangles. Then program calculates which rectangle has 
 *          the greater area or if they are equal.
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
    double length1, //length of first rectangle
            width1, //width of first rectangle
            area1, //area of first rectangle
            length2, //length of second rectangle
            width2, //width of second rectangle
            area2; //area of second triangle
    
    
    //Input data
    cout<<"this program calculates the area of both triangles ";
    cout<<"and determines whether they are the same or equal"<<endl;
    cout<<" enter the length and width of the first rectangle ";
    cin>>length1>>width1;
    cout<<" enter the length and width of the second rectangle ";
    cin>>length2>>width2;
    
    //Map inputs to outputs or process the data
    area1= (length1*width1);//area of a rectangle formula
    area2= (length2*width2);
    
    
    //Output the transformed data
    if (area1>area2)
        cout<<" 1st rectangles area is greater than 2nd rectange's "<<endl;
    else if (area1<area2)
        cout<<" 1st rectangle's area is less than 2nd rectangle's "<<endl;
    else if (area1==area2)
        cout<<"area for both rectangles are equal"<<endl;
        
    
    
    //Exit stage right!
    return 0;
}

