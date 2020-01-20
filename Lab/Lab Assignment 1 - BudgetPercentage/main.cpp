/* 
 *  File:   main.cpp
 * Author: KenTo
 *
 * Created on January 10, 2020, 8:02 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    int numToPerc=100;
    float fedBdgt,milBdgt;
    

    fedBdgt=4.1e12f;
    milBdgt=7.0e11f; 
  
   
    cout<<"Federal Budget  = $"<<fedBdgt<<endl;
    cout<<"Military Budget = $"<<milBdgt<<endl;
    cout<<"Military Budget =  "<<milBdgt/fedBdgt*numToPerc<<"%"<<endl;
    
    return 0;
}