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

float kineticEnergy(float mass, float velocity);

int main(int argc, char** argv) {

    float KE, m, v;
    
    cout << "Enter the object's mass:" << endl;
    cin >> m;
    cout << "Enter the object's velocity:" << endl;
    cin >> v;
    
    KE = kineticEnergy(m, v);
    
    cout << fixed << setprecision(1);
    cout << "The object has " << KE << " Joules of energy.";
    return 0;
}
float kineticEnergy(float mass, float velocity) {
    float ke;
    ke = 0.5 * mass * velocity * velocity;
    return ke;
}
