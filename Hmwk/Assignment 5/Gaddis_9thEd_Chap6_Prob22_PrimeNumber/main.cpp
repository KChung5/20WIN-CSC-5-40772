/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 30, 2020, 7:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
bool isPrime(int);
int main(int argc, char** argv) {

    int num;
    bool x;

    cout << "Enter a number:" << endl;
    cin >> num;

    x = isPrime(num);

    cout << num << (x?  " is a prime number.":" is not a prime number.");
    
    return 0;
}
bool isPrime(int num) {
    bool yesOrNo;
    
    if (num%2 == 0 || num%3 == 0 || num%5 == 0) yesOrNo = false;
    else yesOrNo = true;
    
    return yesOrNo;
}
