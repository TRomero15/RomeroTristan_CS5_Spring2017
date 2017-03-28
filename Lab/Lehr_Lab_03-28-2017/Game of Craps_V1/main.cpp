/* 
 * File: Sum of dice 
 * Author: Tristan Romero 
 * Created on 28 March 2017
 * Purpose:   
 */

//System Libraries
#include <iostream>  
#include <ctime>
#include <cstdlib> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    
    
    //declare variables
    int nGames, wins = 0 , losses= 0 ;
    
   //initialize variables
    nGames=10000;
    
    //Play the Game  
    for(int game=1;game<=nGames;game++){
        char die1=rand() %6+1;//[1,6]
        char die2=rand() %6+1; //[1,6]
        char sum1= die1 +die2;
        
        //determine wins and losses
        if(sum1==7||sum1==11)wins++;
        else if(sum1==2||sum1==3||sum1==12)losses;
        else{
            //loop until a 7 or previous sum is thrown
            bool thrwAgn=true;
            do{
                //throw the dice again
                char die1=rand()%6+1;//{1,6}
                char die2=rand()%6+1;//{1,6}
                char sum2=die1+die2;
                if(sum2==7){
                    losses++;
                    thrwAgn=false;
                }else if(sum1==sum2){
                        wins++;
                        thrwAgn=false;
                    }
                
                }while(thrwAgn);
        }
    }
                
                  
    
  //Output the transformed data
  cout<<" total number of games = "<<nGames<<endl;
  cout<<" Number of games won = "<<wins<<endl;
  cout<<" Number of games lost = "<<losses<<endl;
  cout<<" Total wins and losses ="<<wins + losses<<endl;
  
  
                
    
    
    //Exit stage right!
    return 0;
}
        

