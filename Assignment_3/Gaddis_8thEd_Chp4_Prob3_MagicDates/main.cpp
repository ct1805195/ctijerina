/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 2:15 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob3 Magic Dates 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   
    float month, day, year;
                 
    cout << "Enter a month in numeric form: ";
    cin >> month;
    cout << "Enter a day: ";
    cin >> day;
    cout << "Enter a 2 digit year: ";
    cin >> year;
            
    if (year ==  month * day)
        cout << "The date is magic.\n";
    
    if (year !=  month * day)
        cout << "The date is not magic.\n";
        
        return 0;
}