/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 5:15 PM
 * Purpose: Assignment 1: adding variables
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
    float varix;//variable x
    float variy;//variable y
    float ttlx;//total of the operation x
    float ttly;//total of the operation y
    float ttlxy;//total of x plus y
   
    //Initialize values
    varix=0.0f;//variable x value
    variy=5.0f;// variable y value
   
    //Process Inputs Here
    ttlx=(varix+1.0);// x value plus 1
    ttly=(variy+1.0);//y value plus 1
    ttlxy=(ttlx+ttly);//final total
    
    //Outputs Unknown Here
    cout<<"x+y="<<ttlxy<<endl;
    
    //Exit stage Right!
    

    return 0;
}
