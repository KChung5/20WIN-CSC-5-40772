/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 27, 2020, 5:27 PM
 */

#include <iostream> 
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float total = 0;
    int coin;
    //Initialize or input i.e. set variable values
    do {
        cout<<"List of coins:"<<endl;
        cout<<"1. Nickel"<<endl;
        cout<<"2. Dime"<<endl;
        cout<<"3. Quarter"<<endl;
        cout<<"4. Dollar"<<endl;
        cout<<"Enter number for coin:"<<endl<<endl;
        cin >> coin;
        
        if (coin == 1) {
            total = total + 0.05;
        }
        else if (coin == 2) {
            total = total + 0.10;
        }
        else if (coin == 3) {
            total = total + 0.25;
        }
        else if (coin == 4) {
            total = total + 1;
        }
        else{
            cout <<"Invalid Entry, Reenter:"<<endl;
            cin>>coin;
        }
        cout<<fixed<<setprecision(2);
        cout<<"Current amount: $"<<total<<endl;
    } while (total < 3.50);
    
    cout<<"Enjoy your deep-fried twinkie"<<endl;
    cout<<"Change to be returned: $"<<total-3.50<<endl;
    return 0;
}

