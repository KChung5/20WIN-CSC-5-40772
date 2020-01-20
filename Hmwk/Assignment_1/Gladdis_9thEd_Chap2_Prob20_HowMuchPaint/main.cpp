/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 12, 2020, 10:27 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float paintPerGal = 340, fenHeight = 6, fenLength = 100, Gal, totalFence;
    
    totalFence = fenHeight*fenLength;
    Gal = totalFence / paintPerGal;
    
    cout <<"About "<< Gal << " gallons of paint used to paint the fence that is 6ft high and 100ft long." << endl;
    
    return 0;
}

