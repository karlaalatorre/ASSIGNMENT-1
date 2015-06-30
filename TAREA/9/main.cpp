/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 7:46 PM
 * Purpose: Assignment 1: Distance per tank of gas
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants
const float CNVPCT=100.0f;// conversion

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    float oggal;// gallons in the tank
    float milto;// miles droven per gallon in town
    float milhig;// miles drover per gallon in highway
    float distow;//distance travel in town with the tank
    float dishig;//distance travel in highway with the tank
   
    //Initialize values
    oggal=20.0f;//gallons in the car's tank
    milto=21.5f;// miles per gallon in town
    milhig=26.8f;//miles per gallon in highway
    
   
    //Process Inputs Here
    distow=(oggal*milto);//miles per 20 gallons in city
    dishig=(oggal*milhig);//miles per 20 gallons in highway
 
    //Outputs Unknown Here
    cout<<"Distance with one tank of gas driven in town = "<<distow<<endl;
    
    cout<<"Distance with one tank of gas driven in highway = "<<dishig<<endl;
   
    //Exit stage Right!
    

    return 0;
}


