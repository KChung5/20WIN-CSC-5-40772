/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 21, 2020, 4:58 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int l1, l2, w1, w2, a1, a2;
    //Initialize Variables
    cout << "Enter the width of rectangle 1:" << endl;
    cin >> w1;
    cout << "Enter the height of rectangle 1:" << endl;
    cin >> l1;
    cout << "Enter the width of rectangle 2:" << endl;
    cin >> w2;
    cout << "Enter the height of rectangle 2:" << endl;
    cin >> l2;
    //Process or map Inputs to Outputs
    a1 = w1*l1;
    a2 = w2*l2;
    //Display Outputs
    if (a1 > a2) {
        cout << "Rectangle 1 has the greater area";
    }
    else if (a1 < a2) {
        cout << "Rectangle 2 has the greater area";
    }
    else {
        cout << "The rectangles have the same area";
    }
    return 0;
}

