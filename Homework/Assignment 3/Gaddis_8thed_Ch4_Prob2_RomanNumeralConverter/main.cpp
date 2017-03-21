/* 
 * File:   Gaddis 8th Edition, Chapter 4, problem 2, Roman numeral converter
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose: Program asks user to enter a number within the range of 
 *          1 through 10 and it will convert it into a Roman numeral. 
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
    int number;//number in the range of 1-10
    
    
   //Input data
    cout<<" this program converts a number in the 1-10 range";
    cout<<" into a Roman numeral "<<endl;
    cout<<" enter number here ";
    cin>>number;
    
    //Map inputs to outputs or process the data
    switch(number) {
        case 1:  cout<<"the Roman numeral of "<<number<<" is I"<<endl;break;
        case 2:  cout<<"the Roman numeral of "<<number<<" is II"<<endl;break;
        case 3:  cout<<"the Roman numeral of "<<number<<" is III"<<endl;break;
        case 4:  cout<<"the Roman numeral of "<<number<<" is IV"<<endl;break;
        case 5:  cout<<"the Roman numeral of "<<number<<" is V"<<endl;break;
        case 6:  cout<<"the Roman numeral of "<<number<<" is VI"<<endl;break;
        case 7:  cout<<"the Roman numeral of "<<number<<" is VII"<<endl;break;
        case 8:  cout<<"the Roman numeral of "<<number<<" is VIII"<<endl;break;
        case 9:  cout<<"the Roman numeral of "<<number<<" is IX"<<endl;break;
        case 10: cout<<"the Roman numeral of "<<number<<" is X"<<endl;break;
        default: cout<<" error, please insert a number ";
        cout<<" in the 1-10 range"<<endl;
        }
     
    
    
    //Exit stage right!
    return 0;
}

