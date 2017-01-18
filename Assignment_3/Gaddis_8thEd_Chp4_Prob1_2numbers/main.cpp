/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 16, 2017, 1:00 PM
  Purpose: Gaddis Homework Chp4 Prob1 2 numbers
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    float firstNumber, secondNumber;
             
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    if (firstNumber > secondNumber)
        cout <<firstNumber<< " is the larger number.\n";
    
    if (secondNumber > firstNumber)
        cout <<secondNumber<< " is the larger number.\n";
    
    if (firstNumber == secondNumber)
        cout << "The numbers are equal.\n";
    
    return 0;
}