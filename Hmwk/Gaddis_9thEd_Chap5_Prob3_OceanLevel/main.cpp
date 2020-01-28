/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 25, 2020, 9:30 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 1;
    float rise;
    
    cout <<"Enter how many millimeters the ocean is rising per year:"<< endl;
    cin >> rise;
    
    cout << left<< fixed<< setprecision(1);
    cout << "Year"<< "\t" <<"Rise(mm)" << endl;
    while ( i < 31){
        cout << i<< "\t" << i*rise << endl;
        i++;
    }
    return 0;
}

