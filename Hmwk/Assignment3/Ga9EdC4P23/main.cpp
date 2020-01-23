/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 22, 2020, 4:12 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    int choice;
    //Initialize Variables
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle"<< endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cin >> choice;
    //Process or map Inputs to Outputs
    cout << fixed << setprecision(1);
    if (choice < 1 || choice > 4) {
        cout << "Invalid entry, Reenter:";
        cin >> choice;
    }
    else if (choice == 1) {
        float r, pi = 3.14159, fin;
        cout << "Enter the radius of the circle:"<< endl; 
        cin >> r;
        if (r < 0) {
            cout << "Invalid entry, Reenter:" << endl;
            cin >> r;
        }
        else {
            fin = pi * r * r;
            cout << "The area of the circle is " << fin;
        }
    }
    else if (choice == 2) {
        float rh, rl, Fin;
        cout << "Enter the length of the rectangle:" << endl;
        cin >> rl;
        if (rl < 0 ){
            cout << "Invalid entry, Reenter:" << endl;
            cin >> rl;
        }cout << "Enter the height of the rectangle:" << endl;
            cin >> rh;
            if (rh < 0){
                cout << "Invalid entry, Reenter:" << endl;
                cin >> rh;
            }
        else {
            
        }
        Fin = rl * rh;
        cout << "The area of the rectangle is " << Fin;
    }
    else if (choice == 3) {
        float base, height, res;
        cout << "Enter the base of the triangle:" << endl;
        cin >> base;
        if (base < 0){
            cout << "Invalid entry, Reenter:" << endl;
            cin >> base;
        }cout << "Enter the height of the triangle:" << endl;
            cin >> height;
            if (height < 0) {
                cout << "Invalid entry, Reenter:" << endl;
                cin >> height;
            }
        else {
            
        }
        res = base * height * 0.5;
        cout << "The area of the triangle is "<< res;
    }
    else if (choice == 4) {
        
    }
    return 0;
}

