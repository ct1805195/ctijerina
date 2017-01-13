/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 10:15 PM
  Purpose: Gaddis Chp3 Problem 8
 */
#include <iostream>
using namespace std;

int main() 
{
    const float widgetWieght = 12.5;
    float emptyPallet;
    float fullPallet;
    float widgets; //number of widgets on pallet
    
    cout<<"How much does the pallet weigh empty?";
    cin>> emptyPallet;
    cout<<"How much does the pallet weigh full?";
    cin>>fullPallet;
    widgets = (fullPallet - emptyPallet) / 12.5;
    cout<<"The number of widgets on the pallet is " << widgets;
     
    return 0;
}