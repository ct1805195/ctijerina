/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 13, 2017, 2:15 PM
  Purpose: Lab Assignment 3 Prob 1
 */
#include <iomanip>
#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    float     federalBudget =  3.54e+12;
    float     militaryBudget = 5.8e+11;
    float     nasaBudget = 1.85e+10;
    float     percentMil;
    float     percentNasa;
    float     totalPercent;

 
    percentMil = (militaryBudget / federalBudget) * 100;

    percentNasa =  (nasaBudget  / federalBudget) * 100;
    
    cout << setprecision(2) << fixed;

    cout<< "The military budget is " <<percentMil<<"% of the federal budget.";

    cout<<" The NASA budget is " <<percentNasa<<"% of the federal budget.";

    totalPercent = percentMil + percentNasa;

    cout<< " Together, the military and NASA are funded "<<totalPercent;
            
    cout <<"% of the federal budget.";

    return 0;
}