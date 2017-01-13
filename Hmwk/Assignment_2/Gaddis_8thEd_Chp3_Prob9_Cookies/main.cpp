/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 9:55 PM
  Purpose: 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    const int calories = 300;
    int cookiesEaten;
    int total;
 
    cout << "How many cookies did you eat?";
    cin >> cookiesEaten;
    total = cookiesEaten * calories;
 
    cout<<"The total number of calories consumed was "<<total<<".";
    
    return 0;
}