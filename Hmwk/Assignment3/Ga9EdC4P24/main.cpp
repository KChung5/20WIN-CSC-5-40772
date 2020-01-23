/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 22, 2020, 6:04 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float t = 0, minTalked = 0, charge = 0;

    cout << "Enter the starting time:" << endl;
    cin >> t;
    
    int result = static_cast<int>(t*100)%100;
    
    if (t < 0 || t > 23.59 || result > 59) {
        cout << "Invalid entry, Reenter:"<< endl;
        cin >> t;
    }
    
    cout << "Enter the number of minutes of the call:"<< endl;
    cin >> minTalked;    

    if (t >= 0 & t <= 6.59) {
        charge =  0.05 * minTalked;
    }
    else if (t >= 7.00 & t <= 19.00) {
        charge =  0.45 * minTalked;
    }
    else if (t >= 19.01 & t <= 23.59) {
        charge =  0.20 * minTalked;
    }
    if (minTalked < 0) {
        cout <<  "Invalid entry, Reenter:"<< endl;
        cin >> minTalked;
    }
    if (t >= 0 & t <= 23.59) {
        cout << fixed << setprecision(2);
        cout << "The charges are $" << charge;
    }
    return 0;
}

