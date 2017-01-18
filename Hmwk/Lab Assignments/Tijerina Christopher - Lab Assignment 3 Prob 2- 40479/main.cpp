/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 7:15 PM
  Purpose: Lab Assignment 3 Prob 2
 */
#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
    const float population08 = 3.04e+08;
    const float population16 =  3.22e+08;
    const float debt08 = 9.7e+12;
    const float debt16 = 2e+13;
    float debtPerPerson08;
    float debtPerPerson16;
    
    cout << setprecision(2) << fixed;

    debtPerPerson08 = debt08 / population08;
    
    debtPerPerson16 = debt16 / population16;    

    cout<<"The total debt per person in 2008 was $"<<debtPerPerson08;

    cout<<". The total debt per person in 2016 was $"<<debtPerPerson16;
            
    return 0;
}