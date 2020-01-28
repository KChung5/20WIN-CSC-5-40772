/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2020, 11:25 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned char nProbs;//Number of problems in menu < 10
    unsigned char choose;//User's choice
    
    //Initialize values
    nProbs='10';
    
    //Loop on menu and problems
    do{
        //Display the menu
        cout<<"Choose the Problem Solution to Display"<<endl;
        cout<<"1. Problem solution for Minimum/Maximum"<<endl;
        cout<<"2. Problem solution for Roman Numeral Converter"<<endl;
        cout<<"3. Problem solution for Magic Dates"<<endl;
        cout<<"4. Problem solution for Areas of Rectangles"<<endl;
        cout<<"5. Problem solution for Mass and Weight"<<endl;
        cout<<"6. Problem solution for Book Club Points"<<endl;
        cout<<"7. Problem solution for The Speed of Sound"<<endl;
        cout<<"8. Problem solution for Freezing and Boiling Points"<<endl;
        cout<<"9. Problem solution for Geometry Calculator"<<endl;
        cout<<"0. Problem solution for Long Distance Calls"<<endl<<endl;
        
        cin>>choose;
        
        //Dependent upon the choice
        switch(choose){
            case '1':{
                int a, b;

                cout << "Enter a number:"<< endl;
                cin >> a;
                cout << "Enter a number:"<< endl;
                cin >> b;

                if (a>b) {
                    cout << a << " is larger";
                }
                else if (a<b) {
                    cout << b << " is larger";
                }
                else {
                    cout <<"They are the same";
                }
                break;
            }
            case '2':{
                int num[] = {1,2,3,4,5,6,7,8,9,10}; 
                int i, number;
                string sym[] = {"I","II","III","IV","V","VI","VII","VIII","IX","X"};

                cout << "Enter a number between 1 and 10:"<< endl;
                cin >> number;

                if (number < 1 || number > 10) {
                    cout << "Entered number is not valid, reenter number:"<< endl;
                    cin >> number;

                }
                i = number - 1;
                cout<< number << " is "<< sym[i]<<" in Roman numerals"; 
                break;
            }
            case '3':{
                int day, month, year;

                cout << "Enter a month:"<<endl;
                cin >> month;
                cout << "Enter a day:"<<endl;
                cin >> day;
                cout << "Enter a year:"<<endl;
                cin >> year;

                if (month * day == year){
                    cout << "The date is magic";
                }
                else {
                    cout << "The date is not magic";
                }            
                break;
            }
            case '4':{
                int l1, l2, w1, w2, a1, a2;

                cout << "Enter the width of rectangle 1:" << endl;
                cin >> w1;
                cout << "Enter the height of rectangle 1:" << endl;
                cin >> l1;
                cout << "Enter the width of rectangle 2:" << endl;
                cin >> w2;
                cout << "Enter the height of rectangle 2:" << endl;
                cin >> l2;

                a1 = w1*l1;
                a2 = w2*l2;

                if (a1 > a2) {
                    cout << "Rectangle 1 has the greater area";
                }
                else if (a1 < a2) {
                    cout << "Rectangle 2 has the greater area";
                }
                else {
                    cout << "The rectangles have the same area";
                }
                break;
            }
            case '5':{
                float weight, mass;

                cout << "Enter the mass of an object:" << endl;
                cin >> mass;

                weight = mass * 9.8;

                if (weight > 1000) {
                    cout << "The object is too heavy";
                }
                else if (weight < 10) {
                    cout << "The object is too light";
                }
                else {
                    cout << fixed << setprecision(1);
                    cout << "The object weighs "<< weight << " newtons";
                }
                break;
            }
            case '6':{
                int book;

                cout << "Enter how many books you purchased this month:"<<endl;
                cin >> book;

                if (book == 0) {
                    cout << "You earned 0 points.";
                }
                else if (book == 1) {
                    cout << "You earned 5 points.";
                }
                else if (book == 2) {
                    cout << "You earned 15 points.";
                }
                else if (book == 3) {
                    cout << "You earned 30 points.";
                }
                else if (book >= 4) {
                    cout << "You earned 60 points.";
                }
                break;
            }
            case '7':{
                int air = 1100, water = 4900, steel = 16400, choice;
                float final, dist; 

                cout << "Choose which medium the sound wave will travel in." << endl;
                cout << "1.Air"<<endl;
                cout << "2.Water"<<endl;
                cout << "3.Steel"<< endl;
                cin >> choice;
                cout << "Enter the distance the wave will travel:" << endl;
                cin >> dist;

                if (dist > 0) {
                    if (choice == 1) {
                        final = dist / air;
                    }
                    else if (choice == 2) {
                        final = dist / water;
                    }
                    else if (choice == 3) {
                        final = dist / steel;
                    }
                }

                cout << showpoint<< fixed<< setprecision(4);
                cout << "The wave will take " << final << " seconds";
                break;
            }
            case '8':{
                int temp;
                const int eaf = -173,eab = 172, mf = -38,mb = 676,of = -362,ob = -306,wf = 32,wb = 212;
                char freeze[] = " will freeze\0";
                char boil[] = " will boil\0";
                //Initialize Variables
                cout << "Enter a temperature:"<< endl;
                cin >> temp;
                //Process or map Inputs to Outputs
                if (temp <= eaf) {
                    cout << "Ethyl alcohol" << freeze<< endl;
                }
                if (temp >= eab) {
                    cout << "Ethyl alcohol" << boil<< endl;
                }
                if (temp <= mf) {
                    cout << "Mercury" << freeze<< endl;
                }
                if (temp >= mb) {
                    cout << "Mercury" << boil<< endl;
                }
                if (temp <= of) {
                    cout << "Oxygen" << freeze<< endl;
                }
                if (temp <= wf) {
                    cout << "Water" << freeze<< endl;
                }
                if (temp >= ob) {
                    cout << "Oxygen" << boil<< endl;
                }
                if (temp >= wb) {
                    cout << "Water" << boil<< endl;
                }
                break;
            }
            case '9':{
                int choice;
                //Initialize Variables
                cout << "Geometry Calculator" << endl;
                cout << "1. Calculate the Area of a Circle"<< endl;
                cout << "2. Calculate the Area of a Rectangle" << endl;
                cout << "3. Calculate the Area of a Triangle" << endl;
                cout << "4. Quit" << endl;
                cin >> choice;
                //Process or map Inputs to Outputs
                cout << fixed << setprecision(1);
                if (choice < 1 || choice > 4) {
                    cout << "Invalid entry, Reenter:"<<endl;
                    cin >> choice;
                }
                if (choice == 1) {
                    float r, pi = 3.14159, fin;
                    cout << "Enter the radius of the circle:"<< endl; 
                    cin >> r;
                    if (r < 0) {
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> r;
                    }
                    else {
                        fin = pi * r * r;
                        cout << "The area of the circle is " << fin;
                    }
                }
                else if (choice == 2) {
                    float rh, rl, Fin;
                    cout << "Enter the length of the rectangle:" << endl;
                    cin >> rl;
                    if (rl < 0 ){
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> rl;
                    }cout << "Enter the height of the rectangle:" << endl;
                        cin >> rh;
                        if (rh < 0){
                            cout << "Invalid entry, Reenter:" << endl;
                            cin >> rh;
                        }
                    else {

                    }
                    Fin = rl * rh;
                    cout << "The area of the rectangle is " << Fin;
                }
                else if (choice == 3) {
                    float base, height, res;
                    cout << "Enter the base of the triangle:" << endl;
                    cin >> base;
                    if (base < 0){
                        cout << "Invalid entry, Reenter:" << endl;
                        cin >> base;
                    }cout << "Enter the height of the triangle:" << endl;
                        cin >> height;
                        if (height < 0) {
                            cout << "Invalid entry, Reenter:" << endl;
                            cin >> height;
                        }
                    res = base * height * 0.5;
                    cout << "The area of the triangle is "<< res;
                }
                else if (choice == 4) {
                    cout << "Exiting the Menu.";
                }
                break;
            }
            case '0':{
                float t = 0, minTalked = 0, charge = 0;
                
                cout << "Enter the starting time:" << endl;
                cin >> t;
                
                int result = static_cast<int>(t*100)%100;
                
                if (t < 0 || t > 23.59 || result > 59) {
                    cout << "Invalid entry, Reenter:"<< endl;
                    cin >> t;
                }
                
                cout << "Enter the number of minutes of the call:"<< endl;
                cin >> minTalked;    
            
                if (t >= 0 & t <= 6.59) {
                    charge =  0.05 * minTalked;
                }
                else if (t >= 7.00 & t <= 19.00) {
                    charge =  0.45 * minTalked;
                }
                else if (t >= 19.01 & t <= 23.59) {
                    charge =  0.20 * minTalked;
                }
                if (minTalked < 0) {
                    cout <<  "Invalid entry, Reenter:"<< endl;
                    cin >> minTalked;
                }
                if (t >= 0 & t <= 23.59) {
                    cout << fixed << setprecision(2);
                    cout << "The charges are $" << charge;
                }
                break;
            }
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choose<=nProbs);

    //Exit stage right!
    return 0;
}