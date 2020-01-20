/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 17, 2020, 3:41 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables or constants here
    int attending, roomCap;
    //7 characters or less
    char info1[] = "Input the maximum ro";
    char info2[] = "om capacity and the ";
    char info3[] = "number of people\0";
    
    //Initialize or input data here
    cout <<info1<<info2<<info3<<endl;
    cin >> roomCap>>attending;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    if (attending > roomCap) {
        cout << "Meeting cannot be held."<<endl;
        cout << "Reduce number of people by "<< attending - roomCap <<" to avoid fire violation.";
    }
    else if (attending <= roomCap) {
        cout << "Meeting can be held."<<endl;
        cout << "Increase number of people by "<< roomCap - attending<< " will be allowed without violation.";
    }
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

