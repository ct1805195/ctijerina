/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 2:15 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob13 Book Club points 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   
    const int zeroBooks = 0,
              oneBook = 1,
              twoBooks = 2,
              threeBooks = 3,
              fourBooks = 4;
    
       int booksPurchased; 

        cout << "How many books have you purchased this month?";
        cin >> booksPurchased;

        if (booksPurchased == zeroBooks)
        {
        cout << "0 Points awarded.";
        }
        else
        {
            if (booksPurchased == oneBook)
            {
                cout << "5 Points awarded.";
            }
            else
            {
                if (booksPurchased == twoBooks)
                {
                    cout << "15 Points awarded.";
                }
                else
                {
                    if (booksPurchased == threeBooks)
                    {
                        cout << "30 Points awarded.";
                    }
                    else
                    {                                          
                        if (booksPurchased >= fourBooks)
                    
                        cout << "60 Points awarded.";
                    }
                }
             }
        }
        return 0;
}