/* 
 * File:   main.c
 * Purpose: Menu to be utilized on homework 4 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice; 
    
    //Show menu and loop
    do{
        //Display Menu 
        cout<<" Type 0 to exit "<<endl;
        cout<<" Type 1 for sum 1 to n Problem "<<endl;
        cout<<" type 2 for sum 0.1 error problem "<<endl;
        cout<<" Type 3 to simulate a craps game results "<<endl;
        cout<<" Type 4 to calculate the sum of two dice "<<endl;
        cout<<" Type 5 to display an ascii character set "<<endl;
        cout<<" Type 6 to display a math tutor program "<<endl;
        cout<<" Type 7 to calculate your weight in lbs "<<endl;
        cout<<" Type 8 to display a Celsius and Fahrenheit table "<<endl;
        cout<<" Type 9 for Problem 9 "<<endl;
        
        //input the choice
        cout<<" Problem "; 
        cin>>choice;
        cout<<" solution "<<endl;
        
        //place solutions to problems in switch statement 
        switch(choice){
            
            case '1':{
                //Declare and initialize variables
                //Make sure 0<=n<=40000
                int n=40000,sum=0;
    
                //Map inputs to outputs or process the data 
                for(int i=1;i<=n;i++){
                sum+=i;
                }
    
               //Output the transformed data
               cout<<" the computed sum of 1 to "<<n<<" = "<<sum<<endl;
               cout<<" and "<<n<<" *("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
               //Exit stage right!
                break;
                }
            case '2':{
               //Declare and initialize variables
                //Make sure 0<=n<=40000
                int nLoop=10000000;
                float sum=0.0f,frac=0.1f;


                //Map inputs to outputs or process the data 
                for(int i=1;i<=nLoop;i++){
                    sum+=frac;
                }

                //Output the transformed data
                cout<<" the computed sum of "
                        <<frac<<" -> "<<nLoop<<" times = "<<sum<<endl;
                cout<<" simple multiplication of "
                        <<frac<<" x "<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<" Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<" % "<<endl;   
                    break;
        }
            case '3':{
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
                                break;
            }
            case '4':{
                //set the random number seed 
            srand(static_cast<unsigned int>(time(0)));


            //declare variables
            unsigned int nThrws=36000;
            int f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,
            f8=0,f9=0,f10=0,f11=0,f12=0;//how many times did we throw this value 

            //loop and throw the dice 
            for(unsigned int thrw=1;thrw<=nThrws;thrw++){
                char die1=rand() %6+1;//[1,6]
                char die2=rand() %6+1; //[1,6]
                char sum = die1 +die2;
                switch (sum){
                    case 2:f2++;break;
                    case 3:f3++;break;
                    case 4:f4++;break;
                    case 5:f5++;break;
                    case 6:f6++;break;
                    case 7:f7++;break;
                    case 8:f8++;break;
                    case 9:f9++;break;
                    case 10:f10++;break;
                    case 11:f11++;break;
                    case 12:f12++;break;
                    default: cout<<"Bad Throw, get rekt noob "<<endl;
                }
                }

          //Output the transformed data
            cout<<" statistics of summing and throwing a pair of Dice "<<endl;
            cout<<"2 was thrown "<<f2<<" out of "<<nThrws<<" times "<<endl;
            cout<<"3 was thrown "<<f3<<" out of "<<nThrws<<" times "<<endl;
            cout<<"4 was thrown "<<f4<<" out of "<<nThrws<<" times "<<endl;
            cout<<"5 was thrown "<<f5<<" out of "<<nThrws<<" times "<<endl;
            cout<<"6 was thrown "<<f6<<" out of "<<nThrws<<" times "<<endl;
            cout<<"7 was thrown "<<f7<<" out of "<<nThrws<<" times "<<endl;
            cout<<"8 was thrown "<<f8<<" out of "<<nThrws<<" times "<<endl;
            cout<<"9 was thrown "<<f9<<" out of "<<nThrws<<" times "<<endl;
            cout<<"10 was thrown "<<f10<<" out of "<<nThrws<<" times "<<endl;
            cout<<"11 was thrown "<<f11<<" out of "<<nThrws<<" times "<<endl;
            cout<<"12 was thrown "<<f12<<" out of "<<nThrws<<" times "<<endl;
            cout<<endl<<"total throws = "<<(f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12)
                    <<" = "<<nThrws<<endl;
    
                break;
        }
        case '5':{
                 //Declare the ascii limit 
                int limit=127;

                //Map inputs to outputs or process the data 
                for(int i=0;i<=127;i++){
                    cout<<static_cast<char>(i);
                    if(i%16==15)cout<<endl;
                }
                break;
        }
        case '6':{
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
            cout<<"Choose the operation * / + - or anything else to exit"<<endl;
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
                break;
        }
        case '7':{
                //set the random number seed 
                srand(static_cast<unsigned int>(time(0)));


                //declare variables
                unsigned int nThrws=36000;
                int f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,
         f8=0,f9=0,f10=0,f11=0,f12=0;//how many times did we throw this value 

                //loop and throw the dice 
                for(unsigned int thrw=1;thrw<=nThrws;thrw++){
                    char die1=rand() %6+1;//[1,6]
                    char die2=rand() %6+1; //[1,6]
                    char sum = die1 +die2;
                    switch (sum){
                        case 2:f2++;break;
                        case 3:f3++;break;
                        case 4:f4++;break;
                        case 5:f5++;break;
                        case 6:f6++;break;
                        case 7:f7++;break;
                        case 8:f8++;break;
                        case 9:f9++;break;
                        case 10:f10++;break;
                        case 11:f11++;break;
                        case 12:f12++;break;
                        default: cout<<"Bad Throw, get rekt noob "<<endl;
                    }
                    }

           //Output the transformed data
           cout<<" statistics of summing and throwing a pair of Dice "<<endl;
           cout<<"2 was thrown "<<f2<<" out of "<<nThrws<<" times "<<endl;
           cout<<"3 was thrown "<<f3<<" out of "<<nThrws<<" times "<<endl;
           cout<<"4 was thrown "<<f4<<" out of "<<nThrws<<" times "<<endl;
           cout<<"5 was thrown "<<f5<<" out of "<<nThrws<<" times "<<endl;
           cout<<"6 was thrown "<<f6<<" out of "<<nThrws<<" times "<<endl;
           cout<<"7 was thrown "<<f7<<" out of "<<nThrws<<" times "<<endl;
           cout<<"8 was thrown "<<f8<<" out of "<<nThrws<<" times "<<endl;
           cout<<"9 was thrown "<<f9<<" out of "<<nThrws<<" times "<<endl;
           cout<<"10 was thrown "<<f10<<" out of "<<nThrws<<" times "<<endl;
           cout<<"11 was thrown "<<f11<<" out of "<<nThrws<<" times "<<endl;
           cout<<"12 was thrown "<<f12<<" out of "<<nThrws<<" times "<<endl;
           cout<<endl<<" total throws = "<<(f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12)
                <<" = "<<nThrws<<endl;
                break;
        }
        case '8':{
             //Declare variables
             float celsius, //Celsius 
                fhrheit;//Fahrenheit


        //Input data
       cout<<" Display a table of the Celsius temperatures from 0 to 20 "<<endl;
       cout<<" and their Fahrenheit equivalents "<<endl;
       cout<<" Celsius                Fahrenheit"<<endl;
       cout<<" ---------------------------------"<<endl;


             //loop and display Celsius and Fahrenheit temperatures 
               for(celsius=0;celsius<=20;celsius++)
               {
                fhrheit=(9/5 * celsius)+32;//Fahrenheit conversion formula
                cout<<left<<setw(1)<<celsius;
                cout<<right<<setw(10)<<fhrheit<<endl;
               }
               cout<<endl;    
                break;
        }
    case '9':{
                cout<<" In Problem solution 9 "<<endl;
                break;
        }
            default :{
                cout<<" Exit the program "<<endl;
            }
        }
        
    }while (choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

