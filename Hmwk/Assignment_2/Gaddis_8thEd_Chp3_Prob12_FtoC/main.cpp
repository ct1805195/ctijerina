/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 9:15 PM
  Purpose: celsius to fahrenheit
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   
     float celsius,
          fahrenheit; 

    cout << "Enter Celsius temperature: ";
    cin >> celsius;

    fahrenheit = celsius * 9.0/5.0 + 32.0;

    cout << "Fahrenheit = " << fahrenheit << endl; 
    return 0;
}