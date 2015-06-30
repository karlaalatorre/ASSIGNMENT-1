/* 
 * File:   main.cpp
 * Author: Valeria Alatorre
 * Created on June 27, 2015, 7:57 PM
 * Purpose: Assignment 1: Restaurant Bill
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
    float meal;//meal cost
    float tax;// tax %
    float tip;//tip %
    float ttlmeal;//total meal cost in dollars
    float ttltax;//total tax in dollars
    float ttltip;// total tip in dollars
   
    //Initialize values
    meal=44.50f;//meal cost
    tax=6.75f;//tax percentage
    tip=15.0f;//tip percentage
    
    //Process Inputs Here
    ttltax=((tax*meal)/CNVPCT);// total tax
    ttltip=((tip*meal)/CNVPCT);// total tip
    ttlmeal=(ttltax+ttltip+meal);// total meal cost
   
    
    //Outputs Unknown Here
    cout<<"Meal Cost = $"<<meal<<endl;
    
    cout<<"Tax Amount = $"<<ttltax<<endl;
    
    cout<<"Tip Amount = $"<<ttltip<<endl;
    
    cout<<"Total Meal Amount = $"<<ttlmeal<<endl;
   
    //Exit stage Right!
    

    return 0;
}

