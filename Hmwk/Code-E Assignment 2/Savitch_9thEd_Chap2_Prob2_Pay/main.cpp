/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 17, 2020, 3:26 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables or constants here
    int sal;
    const float inc = 0.076, leng = 6;
    float msal, asal, retro;
    //7 characters or less
    char info1[] = "Input previous annua";
    char info2[] = "l salary.\0";
    char pay1[] = "Retroactive pay\0";
    char pay2[] = "New annual salary\0";
    char pay3[] = "New monthly salary\0";
    //Initialize or input data here
    cout << info1<<info2<<endl;
    cin >> sal;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    retro = (sal/2)*inc;
    asal = sal +2*retro;
    msal = asal/12;
    //Format and display outputs here
    cout <<showpoint<<left<<fixed<<setprecision(2);
    cout <<setw(19)<< pay1<<"= $"<<right<<setw(7)<<retro<<left<<endl;
    cout <<setw(19)<< pay2<<"= $"<<right<<setw(7)<<asal<<left<<endl;
    cout <<setw(19)<< pay3<<"= $"<<right<<setw(7)<<msal;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

