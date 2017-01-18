/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 2:15 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob5 BMI 
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
   
    float weight, height, BMI;
                 
    cout << "Enter the weight: ";
    cin >> weight;
    cout << "Enter the height: ";
    cin >> height;
    
    BMI = (weight * 703) / pow(height, 2.0);   
    
    if (BMI < 18.5)
        cout << "Underweight.\n";
    
    if (BMI > 25)
        cout << "Overweight.\n";  
     
    if (BMI >= 18.5)
     {
        if (BMI <=25) //Nested if
        {
            cout << "Optimal weight.\n";
            }
        }
        return 0;
}