/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 27, 2020, 6:05 PM
 */

#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float h, w, age, adj;
    float hatsize, jacketsize, waistsize, jsinten, wsinten, ageinten;
    string rep;
    bool again;
    
    do {
        cout << "Enter height(inches):"<< endl<<endl;
        cin >> h;
        cout << "Enter Weight(pounds):" <<endl<<endl;
        cin >> w;
        cout << "Enter age:" <<endl<<endl;
        cin >> age;
        
        hatsize = (w / h)*2.9;
        ageinten = age + 10;
        
        if (age > 30){
            jacketsize = ((h * w)/288) + static_cast<float>(static_cast<int>(age-30)/10)/8;
        }
        else {
            jacketsize = ((h * w)/288);
        }
        if (ageinten > 30) {
            jsinten = ((h * w)/288) + static_cast<float>(static_cast<int>(ageinten-30)/10)/8;
        }
        else {
            jsinten = ((h * w)/288);
        }
        if (age > 28) {
            waistsize = (w/5.7) + static_cast<float>(static_cast<int>(age-28)/2)/10;
        }
        else {
            waistsize = (w/5.7);
        }
        if (ageinten > 28) {
            wsinten = (w/5.7) + static_cast<float>(static_cast<int>(ageinten-28)/2)/10;
        }
        else {
            wsinten = (w/5.7);
        }
        
        cout << fixed << setprecision(1);
        cout << "Hat size = " << hatsize << endl;
        cout << "Jacket size = " << jacketsize << endl;
        cout << "Jacket size in 10 years = "<< jsinten << endl;
        cout << "Waist size = " << waistsize << endl;
        cout << "Waist size in 10 years = "<< wsinten << endl << endl;
        
        cout << "Run again:"<< endl;
        cin >> rep;
        if (rep == "y") {
            again = true;
            cout<<endl;
         }
        else if (rep == "n") {
            again = false;
          }
    } while(again == true);
    return 0;
}

