/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 3:05 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob6 Mass & Weight 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   
    float mass, weight;
                 
    cout << "Enter the mass: ";
    cin >> mass;
      
    weight = mass * 9.8;
    
    cout<<"The object weighs "<<weight<<" newtons.";
        
    if (weight > 1000)
        cout << "The object is too heavy.\n";
    
    if (weight < 10)
        cout << "The object is too light.\n";
            
        return 0;
}