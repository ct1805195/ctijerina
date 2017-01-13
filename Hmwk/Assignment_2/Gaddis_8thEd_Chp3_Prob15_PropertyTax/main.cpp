/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 12, 2017, 1:12 PM
  Purpose: Gaddis Chp3 Problem 15 Property Tax
 */

#include <iostream>

using namespace std;
 
int main()
 {
 
    const float assValPercent  = .6 , propTaxCalc  = .0075;
    float actValue, assessValue, propTax;
 
    cout<< "How much the is actual property value?";
    cin>> actValue;
 
    assessValue = actValue * assValPercent;
 
    propTax = assessValue * propTaxCalc;
 
    cout<< "The assessment value is " <<assessValue<< " and the property tax is ";
    cout<<propTax;
    
    return 0;
}