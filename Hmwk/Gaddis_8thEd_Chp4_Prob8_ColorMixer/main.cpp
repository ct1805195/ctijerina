/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 16, 2017, 1:00 PM
  Purpose: Gaddis Homework Chp4 Prob 8 Color Mixer
 */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    
    string firstColor;

    string secondColor;

cout << "Enter red, blue or yellow. ";

getline(cin, firstColor);
 
if (firstColor == "red")
{
    cout << "Enter blue or yellow. ";
    string secondColor;
    getline(cin, secondColor);
}
else if (firstColor == "blue")
  {
    cout << "Enter red or yellow. ";
    getline(cin, secondColor);
  }
else if (firstColor == "yellow")
 {
    cout << "Enter red or blue. ";
    getline(cin, secondColor);
    {            
    return 0;
}