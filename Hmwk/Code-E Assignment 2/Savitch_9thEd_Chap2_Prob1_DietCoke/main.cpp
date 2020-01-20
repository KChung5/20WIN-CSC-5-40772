/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 5:51 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables or constants here
    int weight, rto, killwt;
    const float amtswt = 0.001, hkill = 45359.2, can = 350, mkill = 5, mwt= 35;
    float canswt, kilg, pop;
    //7 characters or less
    char info1[] = "Program to calculate";
    char info2[] = " the limit of Soda P";
    char info3[] = "op Consumption.\0";
    char ask1[] = "Input the desired di";
    char ask2[] = "eters weight in lbs.\0";
    
    //Initialize or input data here
    cout << info1<<info2<<info3<<endl;
    cout << ask1<< ask2<<endl;
    cin >> weight;
    //Display initial conditions, headings here
    rto = mwt/mkill;
    pop = (weight/100)*hkill;
    kilg = pop/rto;
    canswt = can * amtswt;
    killwt = kilg / canswt;
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout << "The maximum number of soda pop cans"<<endl;
    cout << "which can be consumed is "<< killwt << " cans";
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

