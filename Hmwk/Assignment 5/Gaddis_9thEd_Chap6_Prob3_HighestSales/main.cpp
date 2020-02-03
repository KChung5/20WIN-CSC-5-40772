/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 30, 2020, 7:34 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

float getSales(string);
void findHighest(float, float, float, float, float &);

int main(int argc, char** argv) {
    
    float NE, SE, SW, NW;

    NE = getSales("Northeast");
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");
    
    findHighest(NE, SE, NW, SW);
    return 0;
}
float getSales(string division) {
    float sales;
    cout << "Enter the sales for " << division << " division:$" << endl;
    cin >> sales;
    return sales;
}

void findHighest(float num1, float num2, float num3, float num4) {
    cout << fixed << setprecision(2);
    if (num1 > num2 && num1 > num3 && num1 > num4) {
        cout << "The Northeast division had the highest sales of $" << num1;
    }
    if (num2 > num1 && num2 > num3 && num2 > num4) {
        cout << "The Southeast division had the highest sales of $" << num2;
    }
    if (num3 > num2 && num3 > num1 && num3 > num4) {
        cout << "The Northwest division had the highest sales of $" << num3;
    }
    if (num4 > num2 && num4 > num3 && num4 > num1) {
        cout << "The Southwest division had the highest sales of $" << num4;
    }
    
}
