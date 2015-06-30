/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 5:40 PM
 * Purpose: Assignment 1: adding variables 3
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float varia;//variable a
    float varib;//variable b
    float varic;//variable c
    float varx;//variable x
    float ttlx;//first new value x
    float ttlxs;// second value of x
    float ttlxt;//third value x
   
    //Initialize values
    varia=1.0f;//variable a value
    varib=10.0f;//variable b value
    varic=100.0f;//variable c value
    varx=0.0f;//variable x value
    
   
    //Process Inputs Here
    ttlx=(varic*3);//new value x
    ttlxs=(ttlx+(varib*6));// second value x
    ttlxt=(ttlxs+(varia*5));//third value x
            
   
    
    //Outputs Unknown Here
    cout<<"Final Value of x= "<<ttlxt<<endl;
   
    //Exit stage Right!
    

    return 0;
}

