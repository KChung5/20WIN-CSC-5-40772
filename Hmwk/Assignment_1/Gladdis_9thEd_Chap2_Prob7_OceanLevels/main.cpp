/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 10, 2020, 9:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float incPerYear = 1.5, numOfYears, higher;
    numOfYears = 5;
    higher= incPerYear * numOfYears;
    cout<<"In five years the ocean's level will be "<<higher<<"mm higher than current sea levels."<< endl;
    numOfYears = 7;
    higher= incPerYear * numOfYears;
    cout<<"In seven years the ocean's level will be "<<higher<<"mm higher than current sea levels."<< endl;
    numOfYears = 10;
    higher= incPerYear * numOfYears;
    cout<<"In ten years the ocean's level will be "<<higher<<"mm higher than current sea levels."<< endl;
    return 0;
}

