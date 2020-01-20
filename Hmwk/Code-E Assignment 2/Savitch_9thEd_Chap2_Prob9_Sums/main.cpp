/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 17, 2020, 4:48 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables or constants here
    int array[9], total, pos = 0, neg = 0;
    //7 characters or less
    char info1[] = "Input 10 numbers, an";
    char info2[] = "y order, positive or";
    char info3[] = " negative\0";
    char res1[] = "Negative sum = ";
    char res2[] = "Positive sum = ";
    char res3[] = "Total sum    = ";
    //Initialize or input data here
    cout <<info1<<info2<<info3<<endl;
    cin >>array[0]>>array[1]>>array[2]>>array[3]>>array[4]>>array[5]>>array[6]>>array[7]>>array[8]>>array[9];
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    for (int i = 0; i < 10; i++ ){
        if (array[i]>=0){
            pos = pos + array[i]; 
        }
        else {
            neg = neg + array[i];    
        }
    }
    total = pos + neg;
    //Format and display outputs here
    cout << res1 << setw(3)<<neg<<endl;
    cout << res2 << setw(3)<<pos<<endl;
    cout << res3 << setw(3)<<total;
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

