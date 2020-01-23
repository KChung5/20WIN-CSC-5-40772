/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 5:12 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float weight, mass;
    //Initialize Variables
    cout << "Enter the mass of an object:" << endl;
    cin >> mass;
    //Process or map Inputs to Outputs
    weight = mass * 9.8;
    //Display Outputs
    if (weight > 1000) {
        cout << "The object is too heavy";
    }
    else if (weight < 10) {
        cout << "The object is too light";
    }
    else {
        cout << fixed << setprecision(1);
        cout << "The object weighs "<< weight << " newtons";
    }
    return 0;
}

