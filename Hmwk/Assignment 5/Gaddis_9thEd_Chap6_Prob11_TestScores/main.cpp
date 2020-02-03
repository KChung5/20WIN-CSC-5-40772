/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: KenTo
 *
 * Created on January 30, 2020, 7:35 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 *
 */

void getScore(int&);
void calcAverage(int, int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main(int argc, char** argv) {

    int score1, score2, score3, score4, score5, lowest;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    lowest = findLowest(score1, score2, score3, score4, score5);

    cout << fixed << setprecision(1);
    calcAverage(score1, score2, score3, score4, score5, lowest);

    return 0;
}
void getScore(int& score) {
        cout << "Enter a test score:" << endl;
        cin >> score;
}
void calcAverage(int num1, int num2, int num3, int num4, int num5, int low) {
    float out;
    out += num1;
    out += num2;
    out += num3;
    out += num4;
    out += num5;
    out -= low;
    out /= 4;
    cout << "The average is " << out;
}
int findLowest(int num1, int num2, int num3, int num4, int num5){
    int lowest;
    lowest = num1;
    if (num2 <= lowest) lowest = num2;
    if (num3 <= lowest) lowest = num3;   
    if (num4 <= lowest) lowest = num4;
    if (num5 <= lowest) lowest = num5;
    return lowest;
}

