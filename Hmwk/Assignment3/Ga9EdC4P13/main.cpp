/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 5:19 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int book;
    //Initialize Variables
    cout << "Enter how many books you purchased this month:"<<endl;
    cin >> book;
    //Process or map Inputs to Outputs
    
    //Display Outputs
    if (book == 0) {
        cout << "You earned 0 points.";
    }
    else if (book == 1) {
        cout << "You earned 5 points.";
    }
    else if (book == 2) {
        cout << "You earned 15 points.";
    }
    else if (book == 3) {
        cout << "You earned 30 points.";
    }
    else if (book >= 4) {
        cout << "You earned 60 points.";
    }
    return 0;
}

