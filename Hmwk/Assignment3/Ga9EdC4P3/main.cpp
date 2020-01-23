/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 4:51 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    int day, month, year;
    //Initialize Variables
    cout << "Enter a month:"<<endl;
    cin >> month;
    cout << "Enter a day:"<<endl;
    cin >> day;
    cout << "Enter a year:"<<endl;
    cin >> year;
    //Process or map Inputs to Outputs
    
    //Display Outputs
    if (month * day == year){
        cout << "The date is magic";
    }
    else {
        cout << "The date is not magic";
    }
    //Exit stage right!
    return 0;
}

