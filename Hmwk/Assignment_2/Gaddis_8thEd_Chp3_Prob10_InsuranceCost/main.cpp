/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 9:40 PM
  Purpose: 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    const float percentage = .8;
    float replacementCost;
    float insurance;
 
cout << "Enter the replacement cost for structure:";
cin >> replacementCost;
 
insurance = replacementCost * percentage;
cout<<"The minimum amount of insurance coverage you should buy is $"<<insurance<<".";

    return 0;
}