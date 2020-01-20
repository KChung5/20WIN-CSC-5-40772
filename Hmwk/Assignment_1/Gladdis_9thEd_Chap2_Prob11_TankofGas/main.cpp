/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 10, 2020, 10:15 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float gasTank = 20, town = 23.5, high = 28.9, dist;
    string isHigh;
    cout << "Will you be traveling by highway or through local streets?" << endl 
            <<"If you are driving by highway type High, if you are driving trough local streets type Town." << endl;
    cin >> isHigh;
    
    if (isHigh == "High"){
        dist = gasTank * high;
        cout << "This car will travel " << dist << " miles.";
    }
    else {
        dist = gasTank * town;
        cout << "This car will travel " << dist << " miles.";
    }
    return 0;
}

