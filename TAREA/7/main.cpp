/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 5:40 PM
 * Purpose: Assignment 1: milles per gallon
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
    float gas;//gasoline in gallons
    float miles;// travel in miles
    float mpg;//miles per gallon
  
    //Initialize values
    gas=16.0f;//gasoline per 350 miles
    miles=350.0f;//miles per 16 gallons of gasoline
  
    //Process Inputs Here
    mpg=(miles/gas);//miles per gallon of gas
 
            
    
    //Outputs Unknown Here
    cout<<mpg<<" Miles per gas"<<endl;
   
    //Exit stage Right!
    

    return 0;
}

