/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 6:00 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    int air = 1100, water = 4900, steel = 16400, choice;
    float final, dist; 
    //Initialize Variables
    cout << "Choose which medium the sound wave will travel in." << endl;
    cout << "1.Air"<<endl;
    cout << "2.Water"<<endl;
    cout << "3.Steel"<< endl;
    cin >> choice;
    cout << "Enter the distance the wave will travel:" << endl;
    cin >> dist;
    //Process or map Inputs to Outputs
    if (dist > 0) {
        if (choice == 1) {
            final = dist / air;
        }
        else if (choice == 2) {
            final = dist / water;
        }
        else if (choice == 3) {
            final = dist / steel;
        }
    }
    //Display Outputs
    cout << showpoint<< fixed<< setprecision(4);
    cout << "The wave will take " << final << " seconds";
    return 0;
}

