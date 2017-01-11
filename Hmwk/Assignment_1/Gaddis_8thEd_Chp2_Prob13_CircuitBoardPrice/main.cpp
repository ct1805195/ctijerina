/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 9, 2017, 7:00 PM
  Purpose:  Circuit Board Price
 */

#include <iostream>
using namespace std;

const float manufacturingCost = 14.95; //manufacturing cost
const float markupPercentage = 0.35;  //markup percentage

int main(int argc, char** argv) {

    float retailSalesPrice; //retail sales price
    float X; //used for calculation
    int l00Percent = 1; //100 percent
    
    X = l00Percent - markupPercentage;
   
    retailSalesPrice = manufacturingCost / X;
    
    cout << "A retail sales price of $"<< retailSalesPrice <<" provides a 35%"
            " profit on the sale of a"
            " circuit board that costs $" <<manufacturingCost<<" to make.";
              
    return 0;
}