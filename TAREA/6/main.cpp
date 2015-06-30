/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 5:15 PM
 * Purpose: Assignment 1: Sales Prediction
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants
const float CNVPCT=100.0f;// Conversion

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float perinc;//percentage of east coast sales division generate
    float compin;//company income
    float ttlsls;// amount of the division income in million $
   
    //Initialize values
    perinc=62.00f;//east coast division generates %
    compin=4.60f;// income of the company in million $
   
    //Process Inputs Here
    ttlsls=((perinc*compin)/CNVPCT);// Money gain by the east coast division
    
    //Outputs Unknown Here
    cout<<"The East Coast sales division provides $ "<<ttlsls<<" millions to the company"<<endl;
    
    //Exit stage Right!
    

    return 0;
}