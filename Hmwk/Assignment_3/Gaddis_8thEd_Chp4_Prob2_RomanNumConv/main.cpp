/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 2:15 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob2 Roman Numeral Converter
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
                           
        char choice;
        
        
      
        {
            cout << "Enter a number between 1 - 10: ";
            cin >> choice;
            
            
            switch (choice)
            {
            case '1': cout << "You entered I.\n";
            break;
            case '2': cout << "You entered II.\n";
            break;
            case '3': cout << "You entered III.\n";
            case '4': cout << "You entered IV.\n";
            break;
            case '5': cout << "You entered V.\n";
            break;
            case '6': cout << "You entered VI.\n";
            case '7': cout << "You entered VII.\n";
            break;
            case '8': cout << "You entered VIII.\n";
            break;
            case '9': cout << "You entered IX.\n";
            break;
            case '10': cout << "You entered X.\n";
            break;
            default: cout << "You did not enter a number between 1 - 10!\n"
                          <<"Run the program again and enter a valid number.\n";
            
            }
        }           
               return 0;
 }
        