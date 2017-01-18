/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 12:15 PM
  Purpose: Gaddis Homework Assignment 3 Chp 4 Prob 7 Time Calc 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   

//Declare and Initialize Variables
 
float seconds, minutes, hours, days;
 
 
cout << "Enter a number of seconds: ";
cin>> seconds;
if (seconds >= 60)  
    minutes = seconds / 60;
    cout  << "There are " <<minutes<<" minutes in "<<seconds<<" seconds.\n";
    if (seconds >= 3600)  
    hours = seconds / 3660;
    cout  << "There are " <<hours<<" hours in "<<seconds<<" seconds.\n";
    if (seconds >= 86400)  
    days = seconds / 86400;
    cout  << "There are " <<days<<" days in "<<seconds<<" seconds.\n";
    
        return 0;
}