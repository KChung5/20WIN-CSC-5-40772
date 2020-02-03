/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 30, 2020, 7:21 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {

    

    float initial, markup, retail;

    cout << "Enter the wholesale cost:" << endl;
    cin >> initial;
    cout << "Enter the markup percentage:" << endl;
    cin >> markup;

    retail = initial + (initial * (markup/100));
    
    cout << fixed << setprecision(2);
    cout << "The retail price is $" << retail;

    return 0;
}

