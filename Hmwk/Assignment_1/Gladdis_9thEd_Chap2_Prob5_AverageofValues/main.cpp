/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 10, 2020, 9:26 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float a = 28, b = 32, c = 37, d = 24, e = 33, stepOne, finalAvg;
    
    stepOne = a+b+c+d+e;
    finalAvg = stepOne/5;
    cout << "The average of " << a << ", "<< b <<", "<< c <<", "<< d <<", and "<< e <<
            " is " << finalAvg;
    
    return 0;
}

