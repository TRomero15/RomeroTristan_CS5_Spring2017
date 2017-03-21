/* 
 * File: Truth Table 
 * Author: Tristan Romero 
 * Created on 19 March 2017
 * Purpose:  Verify the truth table is true
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //output the table header
cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Determine first row in the table 
x=true;y=true;
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"   ";
cout<<(!y?'T':'F')<<"    ";
cout<<(x||y?'T':'F')<<"     ";
cout<<(x&&y?'T':'F')<<"      ";
cout<<(x^y?'T':'F')<<"       ";
cout<<(x^y^y?'T':'F')<<"        ";
cout<<(x^y^x?'T':'F')<<"         ";
cout<<(!(x||y)?'T':'F')<<"          ";
cout<<(!x&&!y?'T':'F')<<"           ";
cout<<(!(x&&y)?'T':'F')<<"            ";
cout<<(!x||!y?'T':'F')<<"             ";
cout<<endl;

//Determine second row in the table 
x=true; y=false;
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"   ";
cout<<(!y?'T':'F')<<"    ";
cout<<(x||y?'T':'F')<<"     ";
cout<<(x&&y?'T':'F')<<"      ";
cout<<(x^y?'T':'F')<<"       ";
cout<<(x^y^y?'T':'F')<<"        ";
cout<<(x^y^x?'T':'F')<<"         ";
cout<<(!(x||y)?'T':'F')<<"          ";
cout<<(!x&&!y?'T':'F')<<"           ";
cout<<(!(x&&y)?'T':'F')<<"            ";
cout<<(!x||!y?'T':'F')<<"             ";
cout<<endl;

//Determine third row in table
x=false;y=true;
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"   ";
cout<<(!y?'T':'F')<<"    ";
cout<<(x||y?'T':'F')<<"     ";
cout<<(x&&y?'T':'F')<<"      ";
cout<<(x^y?'T':'F')<<"       ";
cout<<(x^y^y?'T':'F')<<"        ";
cout<<(x^y^x?'T':'F')<<"         ";
cout<<(!(x||y)?'T':'F')<<"          ";
cout<<(!x&&!y?'T':'F')<<"           ";
cout<<(!(x&&y)?'T':'F')<<"            ";
cout<<(!x||!y?'T':'F')<<"             ";
cout<<endl;

//Determine fourth row in table
x=false;y=false;
cout<<(x?'T':'F')<<" ";
cout<<(y?'T':'F')<<"  ";
cout<<(!x?'T':'F')<<"   ";
cout<<(!y?'T':'F')<<"    ";
cout<<(x||y?'T':'F')<<"     ";
cout<<(x&&y?'T':'F')<<"      ";
cout<<(x^y?'T':'F')<<"       ";
cout<<(x^y^y?'T':'F')<<"        ";
cout<<(x^y^x?'T':'F')<<"         ";
cout<<(!(x||y)?'T':'F')<<"          ";
cout<<(!x&&!y?'T':'F')<<"           ";
cout<<(!(x&&y)?'T':'F')<<"            ";
cout<<(!x||!y?'T':'F')<<"             ";
cout<<endl;
    
    //Output Located Here
    cout<<""<<endl;

    //Exit
    return 0;
}

