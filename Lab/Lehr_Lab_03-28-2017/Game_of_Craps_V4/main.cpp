/* 
 * File: Sum of dice 
 * Author: Tristan Romero 
 * Created on 28 March 2017
 * Purpose: simulate a Craps Game 
 */

//System Libraries
#include <iostream> //input - output library 
#include <ctime> //time for rand
#include <cstdlib> //srand to get the seed
#include <fstream> //file I/O
#include <iomanip> //format the output
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;//conversion to percent 
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    
    
    //declare variables
    ifstream in;
    ofstream out;
    int nGames, wins=0 , losses=0;
    int mxThrw=0, numThrw=0, lmGames=100000;
    
   //initialize variables
    in.open("GameInfo.dat");
    out.open("GameStats.dat");
    while(in>>nGames);//last value becomes the number of games 
    nGames=nGames>lmGames?lmGames:nGames;
    
    //Play the Game  
   
    for(int game=1;game<=nGames;game++){
        //throw dice and sum
        int gmThrw=1;
        char die1=rand() %6+1;//[1,6]
        char die2=rand() %6+1; //[1,6]
        char sum1= die1 +die2;
        //determine wins and losses
        switch(sum1){
            case 7:
            case 11:wins++;break;
            case 2:
            case 3:
            case 12:losses++;break;
            default:{
         //loop until a 7 or previous sum is thrown
            bool thrwAgn=true;
            do{
                //throw the dice again
                char die1=rand()%6+1;//{1,6}
                char die2=rand()%6+1;//{1,6}
                char sum2=die1+die2;
                gmThrw++;
                if(sum2==7){
                    losses++;
                    thrwAgn=false;
                }else if(sum1==sum2){
                        wins++;
                        thrwAgn=false;
                    }
                }while(thrwAgn);//do-while 
             }
        }
        numThrw+=gmThrw;
        if(mxThrw<gmThrw)mxThrw=gmThrw;//Independent if
    }
                
                  
    
  //Output the transformed data
  cout<<" total number of games = "<<nGames<<endl;
  cout<<" Number of games won = "<<wins<<endl;
  cout<<" Number of games lost = "<<losses<<endl;
  cout<<" Total wins and losses ="<<wins + losses<<endl;
  cout<<" Percentage wins        = "
          <<static_cast<float>(wins)/nGames*PERCENT<<" % "<<endl;
  cout<<"Percentage losses      = "
          <<static_cast<float>(losses)/nGames*PERCENT<<" % "<<endl;
  cout<<" Maximum number of throws in a game = "<<mxThrw<<endl;
  cout<<" Average throw per game = "<<static_cast<float>(numThrw)/nGames<<endl;
  
  //Output the transformed data to a file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Total number of Games = "<<nGames<<endl;
    out<<"Number of games won   = "<<wins<<endl;
    out<<"Number of games lost  = "<<losses<<endl;
    out<<"Total wins and losses = "<<wins+losses<<endl;
    out<<"Percentage wins       = "
            <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage losses     = "
            <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
    out<<"Maximum number of throws in a game = "<<mxThrw<<endl;
    out<<"Average throw per game="<<static_cast<float>(numThrw)/nGames<<endl;
  
 //Exit stage right!
  in.close();
  out.close();
  return 0;
}
        

