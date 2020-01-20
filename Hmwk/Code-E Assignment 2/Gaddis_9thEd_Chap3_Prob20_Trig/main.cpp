/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 5:50 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float deg, sinR, cosR, tanR, rad;
    //Initialize or input i.e. set variable values
    cout <<"Calculate trig functions"<<endl;
    cout << "Input the angle in degrees."<<endl;
    cin >> deg;
    //Map inputs -> outputs
    rad = 3.141592 / 180;
    sinR = sin (deg*rad);
    cosR = cos (deg*rad);
    tanR = tan (deg*rad);
    //Display the outputs
    cout <<fixed;
    cout <<setprecision(0)<<"sin("<<deg<<") = "<<setprecision(4)<<showpoint<<sinR<<endl;
    cout <<setprecision(0)<<noshowpoint<<"cos("<<deg<<") = "<<setprecision(4)<<showpoint<<cosR<<endl;
    cout <<setprecision(0)<<noshowpoint<<"tan("<<deg<<") = "<<setprecision(4)<<showpoint<<tanR;
    //Exit stage right or left!
    return 0;
    return 0;
}

