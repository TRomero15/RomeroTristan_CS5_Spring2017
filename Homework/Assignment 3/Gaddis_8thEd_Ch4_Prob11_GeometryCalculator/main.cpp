/* 
 * File: Gaddis,8th edition, chapter 4, problem 11, Geometry Calculator
 * Author: Tristan Romero 
 * Created on 19 March 2017
 * Purpose: write a program that when the user inputs the number 1, the program
 *          asks to calculate the area of a circle, 
 
  

 */

//System Libraries
#include <iostream>
#include<cmath> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double pi=3.14159;//Pi is estimated to be 3.14159

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int input;//input used for menu
    
    double  radius,//radius of a circle
            length,//length of a rectangle or triangle
            width,//width of a rectangle
            height,//height of a triangle
            area;//Area of a Circle, Rectangle, or Triangle
    
    
            
    //Display geometry calculator menu here
    cout<<" 1.Calculate the Area of a Circle "<<endl;
    cout<<" 2. Calculate the Area of a Rectangle "<<endl;
    cout<<" 3. Calculate the Area of a Triangle"<<endl;
    cout<<" 4. Quit "<<endl;
    cin>>input;
   
    //Map inputs to outputs and output the transformed data
    switch(input)
    {
        case 1: cout<<" enter the Radius of a Circle here ";
        cin>>radius;
        area=pi*pow(radius,2);
        cout<<" the Area of a Circle is "<<area<<endl;break;
        
        case 2: cout<<" enter the length of a rectangle here  ";
        cin>>length;
        cout<<" enter the width of a Rectangle here ";
        cin>>width;
        area=length*width;
        cout<<" the Area of a Rectangle is "<<area<<endl;break;
        
        case 3: cout<<" enter the Length of the Triangles base here ";
        cin>>length;
        cout<<" enter the Height of the Triangle here ";
        cin>>height;
        area=.5*(length*height);
        cout<<" the Area of a Triangle is "<<area<<endl;break;
        
        case 4:cout<<" quitting Geometry Calculator  "<<endl;break;
        
        default: cout<<"error, please enter a valid input 1-4";
        cout<<" from the Geometry Calculator Menu"<<endl;
        }
    
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

