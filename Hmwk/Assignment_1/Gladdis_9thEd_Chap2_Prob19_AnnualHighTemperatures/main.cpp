/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 11, 2020, 8:26 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int NYC = 85, Den = 88, Pho = 106;
    
    cout << "Last year's average highs in July for NYC was " << NYC <<  " degrees Fahrenheit." << endl;
    cout << "This year's average highs in July for NYC was " << NYC + 2 <<  " degrees Fahrenheit." << endl;
    cout << "Last year's average highs in July for Denver was " << Den <<  " degrees Fahrenheit." << endl;
    cout << "This year's average highs in July for Denver was " << Den + 2 <<  " degrees Fahrenheit." << endl;
    cout << "Last year's average highs in July for Phoenix was " << Pho <<  " degrees Fahrenheit." << endl;
    cout << "This year's average highs in July for Phoenix was " << Pho + 2 <<  " degrees Fahrenheit." << endl;
    return 0;
}

