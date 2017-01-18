/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 12:15 PM
  Purpose: Gaddis Homework Assignment 3 Chp 4 Prob 4 Area of Rectangles 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   
    float length1, width1, area1, rectangle1;
    float length2, width2, area2, rectangle2;
             
    cout << "Enter the length of the rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of the rectangle 1: ";
    cin >> width1;
    cout << "Enter the length of the rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of the rectangle 2: ";
    cin >> width2;
    area1 = length1 * width1;
    area2 = length2 * width2;
        
    if (area1 > area2)
        cout << "Rectangle 1 has the greater area.\n";
    
    if (area2 > area1)
        cout << "Rectangle 2 has the greater area.\n";
    
    if (area1 == area2)
        cout << "The areas of the Rectangles are the same.\n";
    
        return 0;
}