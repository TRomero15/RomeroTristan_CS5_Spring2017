/* 
 * File: Gaddis, 8th edition, chapter 4, problem 5, book club points
 * Author: Tristan Romero 
 * Created on 18 March, 2017
 * Purpose: write a program that asks the user to enter the number of books
 *          purchased this month and the number of points awarded. 
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
   unsigned int booksPur; //books purchased
          
   //Input data
   cout<<"this program asks you how many books you have purchased this month";
   cout<<" in order to calculate how many points you have earned";
   cout<<" for your book purchases."<<endl; 
   cout<<" enter how many books you have purchased this month ";
   cin>>booksPur;
    
    //Map inputs to outputs or process the data
   if (booksPur==0)
       cout<<" monthly points earned is 0 "<<endl;
   else if (booksPur==1)
       cout<<" monthly points earned is 5 "<<endl;
   else if (booksPur==2)
       cout<<" monthly points earned is 15 "<<endl;
   else if (booksPur==3)
       cout<<" monthly points earned is 30 "<<endl;
   else if (booksPur>=4)
       cout<<" monthly points earned is 60 "<<endl;
   
   //Exit stage right!
    return 0;
}

