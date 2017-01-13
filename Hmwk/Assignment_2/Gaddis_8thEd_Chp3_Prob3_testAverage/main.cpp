/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 12, 2017, 2:15 PM
  Purpose: Gaddis Chp3 Problem 3 test average
 */
#include <iostream>
#include <iomanip>
using namespace std;
 
 int main()
 {
 float test1, test2, test3, test4, test5;
 float average; // To hold the average
 
 // Get the three test scores.
 cout << "Enter the first test score: ";
 cin >> test1;
 cout << "Enter the second test score: ";
 cin >> test2;
 cout << "Enter the third test score: ";
 cin >> test3;
 cout << "Enter the fourth test score: ";
 cin >> test4;
 cout << "Enter the fifth test score: ";
 cin >> test5;
 
 cout << setprecision(1) << fixed;
 
 // Calculate the average of the scores.
 average = (test1 + test2 + test3 + test4 + test5) / 5.0;
 
 cout << setprecision(1) << fixed;
 
 // Display the average.
 cout << "The average test score is: " << average << endl;
    return 0;
}