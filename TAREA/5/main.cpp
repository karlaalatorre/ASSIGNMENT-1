/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 6:04 PM
 * Purpose: Assignment 1: sum of two numbers
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
    float fstvar;//first variable
    float sndvar;//second variable
    float ttlvar;// total of first and second variables sum
   
    //Initialize values
    fstvar=62.00f;//first variable value
    sndvar=99.00f;//second variable value
     
    //Process Inputs Here
    ttlvar=(fstvar+sndvar);//total of sum
    
    //Outputs Unknown Here
    cout<<"Total: "<<ttlvar<<endl;
    
    //Exit stage Right!
    

    return 0;
}