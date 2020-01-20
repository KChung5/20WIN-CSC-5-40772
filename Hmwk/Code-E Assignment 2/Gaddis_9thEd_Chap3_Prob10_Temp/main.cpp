/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 5:07 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float far, cen, temp;
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" <<endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> far;
    //Map inputs -> outputs
    cen = (far-32)*5/9;
    //Display the outputs
    cout << showpoint<< setprecision(4) << far<<" Degrees Fahrenheit = "<< cen <<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}

