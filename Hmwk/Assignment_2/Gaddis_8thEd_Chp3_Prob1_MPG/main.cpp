/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 12, 2017, 12:15 PM
  Purpose: Gaddis Chp3 Problem 1
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
   float gallons, miles, mpg;
    
   cout<< "How many gallons of gas can the car hold?" ;
   cin>> gallons;
   cout<< "How many miles can the car drive on a full tank?" ;
   cin>> miles;
   mpg = miles / gallons;
   cout<< "This car will drive "  <<mpg<<" miles one a gallon of gas." ;

    return 0;
}