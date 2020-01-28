/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 25, 2020, 9:44 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i = 1;
    float calPerMin;
    
    cout << "Enter how many calories are burned per minute:" << endl;
    cin >> calPerMin;
    
    cout << "Min\t" << "Calories burned" << endl;
    cout << fixed << setprecision(1);
    while (i*5 <= 30) {
        cout << i*5 << "\t" << (i*5)*calPerMin << endl;
        i++;
    }
    return 0;
}

