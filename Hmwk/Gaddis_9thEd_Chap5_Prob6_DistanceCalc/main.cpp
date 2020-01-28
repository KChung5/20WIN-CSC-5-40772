/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 25, 2020, 9:54 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int speed, hours, i= 0;

    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout <<"How many hours has it traveled?" << endl;
    cin >> hours;

    cout << "Hour   Distance Traveled" << endl;
    while (i < hours) {
        cout << ++i << setw(15) << speed*i << endl;
    }
    return 0;
}

