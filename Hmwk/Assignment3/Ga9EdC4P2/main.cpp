/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 20, 2020, 4:08 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    


    int num[] = {1,2,3,4,5,6,7,8,9,10}; 
    int i=11, number;
    string sym[] = {"I","II","III","IV","V","VI","VII","VIII","IX","X"};
   


    cout << "Enter a number between 1 and 10:"<< endl;
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Entered number is not valid, reenter number:"<< endl;
        cin >> number;
        
    }
    int val = number;
    while(number>0) 
    { 
        
      int div = number/num[i]; 
      number = number%num[i]; 
      while(div--) 
      { 
        cout<< val << " is "<< sym[i]<<" in Roman numerals"; 
      } 
      i--; 
    }
    return 0;
}

