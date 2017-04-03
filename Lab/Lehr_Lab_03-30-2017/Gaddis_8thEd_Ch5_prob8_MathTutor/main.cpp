/* 
 * File:   main.cpp
 * Author: Tristan Romero 
 * Created on February 19, 2017, 6:26 PM
 * Purpose:   Math tutor
 */

//System Libraries
#include <iostream>//Input - Output Library
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int op1,op2,result,answer;
    char choice;
    //Initialize variables
    cout<<"Math Tutor"<<endl;
    cout<<"Choose the operation * / + -"<<endl;
    cin>>choice;
    
    //Input data
    do{
        cout<<" Math Tutor "<<endl;
        cout<<" Choose the operation * / + - or anything else to exit "<<endl;
        cin>>choice;
        cout<<endl<<endl;
        if(!(choice=='+'||choice=='-'||choice=='*'||choice=='/')){
            cout<<" Exit the math tutor program "<<endl;
            exit(0);
    }
    
    //Map inputs to outputs or process the data
    switch(choice){
        case '+':{
            op1=rand()%900+100;//[100-999]
            op2=rand()%900+100;//[100-999]
            answer=op1+op2;//[3 to 4 digit result]
            break;
            
        }
        case '-':{
            op1=rand()%900+100;//[100-999]
            op2=rand()%900+100;//[100-999]
            answer=op1-op2;//[0 to 3 digit result]
            break;
        }
        case'*':{
            op1=rand()%90+10;//[10-99]
            op2=rand()%90+10;//[10-99]
            answer=op1*op2;//[2 to 4 digit result]
            break;
        }
        case '/':{
            op1=rand()%90+10;//[10-99]
            op2=rand()%90+10;//[10-99]
            answer=op1/op2;//[2 to 3 digit result]
            break;
        }
        default:{
            cout<<"Bad Operator"<<endl;
            return 1;
        }
    }
    //Output the transformed data
    cout<<setw(8)<<op1<<endl;
    cout<<choice<<setw(7)<<op2<<endl;
    cout<<"----------"<<endl;
    cin>>result;
    
    //compare the answer 
    cout<<endl;
    cout<<((result==answer)?"correct":"Incorrect")<<endl;
    cout<<"The answer  = "<<answer<<endl;
} while(choice=='+'||choice=='-'||choice=='/'||choice=='*');
    //Exit stage right!
    return 0;
}

