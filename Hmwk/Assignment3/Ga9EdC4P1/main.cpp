/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 20, 2020, 4:02 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    int a, b;
    //Initialize Variables
    cout << "Enter a number:"<< endl;
    cin >> a;
    cout << "Enter a number:"<< endl;
    cin >> b;
    //Process or map Inputs to Outputs
    if (a>b) {
        cout << a << " is larger";
    }
    else if (a<b) {
        cout << b << " is larger";
    }
    else {
        cout <<"They are the same";
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}

