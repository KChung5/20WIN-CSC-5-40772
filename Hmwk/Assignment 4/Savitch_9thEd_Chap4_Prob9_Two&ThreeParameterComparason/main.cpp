/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 26, 2020, 10:16 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float first, second, third, TwoPart, ThreePart;

    cout << "Enter first number:"<<endl<<endl;
    cin >> first;
    cout << "Enter Second number:"<<endl<<endl;
    cin >> second;
    cout << "Enter third number:"<<endl<<endl;
    cin >> third;

    if (first > second) {
        TwoPart = first;
    }
    else {
        TwoPart = second;
    }
    if (TwoPart > third)  {
        ThreePart = TwoPart;
    }
    else {
        ThreePart = third;
    }

    cout << fixed<< setprecision(1);
    cout << "Largest number from two parameter function:"<< endl;
    cout << TwoPart<< endl<<endl;
    cout << "Largest number from three parameter function:"<< endl;
    cout << ThreePart<< endl;
    
    return 0;
}

