/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 16, 2020, 4:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int cookies = 30, serving = 4, serCal = 300,calPerCook, eat, totalcals;
    //Initialize or input i.e. set variable values
    cout << "Calorie Counter"<< endl;
    cout << "How many cookies did you eat?"<< endl;
    cin>>eat;
    //Map inputs -> outputs
    calPerCook = serCal/serving;
    totalcals = eat*calPerCook;
    //Display the outputs
    cout<<"You consumed "<<totalcals<< " calories.";
    //Exit stage right or left!
    return 0;
    return 0;
}

