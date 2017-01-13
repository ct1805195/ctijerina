/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 12:15 PM
  Purpose: Gaddis Chp3 Problem 4 Average Rainfall
 */

#include <iostream>
using namespace std;
 
    int main()
 {
    double rain1, rain2, rain3;
    double average; // To hold the average
    string month1, month2, month3;
 

    cout << "Enter the first month: ";
    cin>> month1;
    cout << "Enter the amount of rainfall for the first month: ";
    cin >> rain1;
    cout << "Enter the second month: ";
    cin>> month2;
    cout << "Enter the amount of rainfall for the second month: ";
    cin >> rain2;
    cout << "Enter the third month: ";
    cin>> month3;
    cout << "Enter the amount of rainfall for the third month: ";
    cin >> rain3;
 
    // Calculate the average rainfall for the 3 months.
      average = (rain1 + rain2 + rain3) / 3.0;
 
    // Display the average.
    cout << "The average rainfall for " << month1 <<", "<< month2 <<",and "<< month3<< " is: " << average << endl;
    return 0;
}