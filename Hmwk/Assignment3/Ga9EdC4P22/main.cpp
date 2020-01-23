/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 6:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int temp, eaf = -173,eab = 172, mf = -38,mb = 676,of = -362,ob = -306,wf = 32,wb = 212;
    char freeze[] = " will freeze\0";
    char boil[] = " will boil\0";
    
    cout << "Enter a temperature:"<< endl;
    cin >> temp;
    
    if (temp <= eaf) {
        cout << "Ethyl alcohol" << freeze<< endl;
    }
    if (temp >= eab) {
        cout << "Ethyl alcohol" << boil<< endl;
    }
    if (temp <= mf) {
        cout << "Mercury" << freeze<< endl;
    }
    if (temp >= mb) {
        cout << "Mercury" << boil<< endl;
    }
    if (temp <= of) {
        cout << "Oxygen" << freeze<< endl;
    }
    if (temp <= wf) {
        cout << "Water" << freeze<< endl;
    }
     
    if (temp >= ob) {
        cout << "Oxygen" << boil<< endl;
    }
    if (temp >= wb) {
        cout << "Water" << boil<< endl;
    }
    return 0;
}

