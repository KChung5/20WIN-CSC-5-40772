/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 25, 2020, 9:34 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num, i = 0, sum = 0;
    
    cout << "Enter a positive integer value:"<< endl;
    cin >> num;
    
    while (i < num) {
        sum = sum + ++i;
    }
    
    cout << "The sum of all the integers from 1 to " << num << " is " << sum;

    
    return 0;
}

