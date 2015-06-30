/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 5:15 PM
 * Purpose: Assignment 1: adding variables 2
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
    float varij;//variable j
    float varik;//variable k
    float varil;//variable l
    float jval;//final value of j
    float kval;//final value k
    float lval;//final value l
   
   
    //Initialize values
    varij=10.0f;//variable j value
    varik=2.0f;// variable k value
    varil=4.0f;//variable l value
   
    //Process Inputs Here
    jval=(varij*varik);//real value of j
    lval=(varik*varil);//real value of l
    kval=(jval+lval);//real value of k
   
    
    //Outputs Unknown Here
    cout<<"value of k = " <<kval<<endl;
    
    //Exit stage Right!
    

    return 0;
}