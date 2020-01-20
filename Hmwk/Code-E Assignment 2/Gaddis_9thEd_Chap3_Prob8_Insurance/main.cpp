/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 4:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float per = 0.8, cost, minAmt;
    //Initialize or input i.e. set variable values
    cout <<"Insurance Calculator"<< endl;
    cout << "How much is your house worth?"<<endl;
    cin >> cost;
    //Map inputs -> outputs
    minAmt = cost * per;
    //Display the outputs
    cout <<"You need $"<< minAmt << " of insurance.";
    //Exit stage right or left!
    return 0;
}

