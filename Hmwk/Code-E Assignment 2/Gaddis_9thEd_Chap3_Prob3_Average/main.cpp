/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 4:40 PM
 */

//User Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>

using namespace std;
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float stud1, stud2, stud3, stud4, stud5, avg;
    //Initialize or input i.e. set variable values
    cout <<"Input 5 numbers to average."<<endl;
    cin >>stud1>> stud2>> stud3>> stud4>> stud5;
    //Map inputs -> outputs
    avg = (stud1+ stud2+ stud3+ stud4+ stud5)/5;
    //Display the outputs
    cout <<"The average = "<< setprecision(2)<< showpoint<<avg;
    //Exit stage right or left!
    return 0;
}

