/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 10, 2020, 9:01 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int accl=32, time, distance; //Acceleration, Time, Distance
    
    cout << "Please input falling time in seconds" << endl;
    cin >> time;
    distance = (accl * (time*time))/2;
    cout << "The object would fall " << distance <<"ft in " << time;
    return 0;
}

