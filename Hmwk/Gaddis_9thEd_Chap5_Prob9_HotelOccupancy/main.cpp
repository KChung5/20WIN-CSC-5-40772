/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 25, 2020, 10:15 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   float total, occupied, unoccupied, floors, rooms, i = 0, totalOccupied = 0,totalUnoccupied = 0, z;

   cout << "Enter how many floors there are:" << endl;
    cin >> floors;

    while (i < floors) {
        cout << "Enter how many rooms are on floor " << ++i << ":" << endl;
        cin >> rooms;
        cout << "Enter how many are occupied:" << endl;
        cin >> occupied;
        total = total + rooms;
        totalOccupied =  totalOccupied + occupied;
        z = rooms - occupied;
        totalUnoccupied = totalUnoccupied + z;
        
    }

    cout << "There are " << totalOccupied << " rooms occupied." << endl;
    cout << "There are " << totalUnoccupied << " rooms unoccupied." << endl;
    cout << fixed << setprecision(1);
    cout << (totalOccupied/total)*100 << "% of rooms are occupied.";
    return 0;
}

