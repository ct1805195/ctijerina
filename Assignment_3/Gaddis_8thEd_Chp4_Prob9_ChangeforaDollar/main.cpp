/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 17, 2017, 1:00 PM
  Purpose: Gaddis Homework Chp4 Prob 9 Change for a dollar
 */
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
   
   float pennies, nickels, dimes, quarters, total;
   float W, X, Y, Z;
   
   cout<<"Enter the number of pennies: ";
   cin>> W;
   cout<<"Enter the number of nickels: ";
   cin>> X;
   cout<<"Enter the number of dimes: ";
   cin>> Y;
   cout<<"Enter the number of quarters: ";
   cin>> Z;
   pennies = W * .01;
   nickels = X * .05;
   dimes = Y * .1;
   quarters = Z * .25;
   total = pennies + nickels + dimes + quarters;
   if (total == 1)
      cout<<"Congrats, you won! The total is: $"<<total;
   if (total < 1)
       cout<<"Your total is less than $1.00";
   if (total > 1)
       cout<<"Your total is more than $1.00";
   
    return 0;
}