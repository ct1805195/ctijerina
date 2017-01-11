/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 1:48 PM
  Purpose:  Energy Drink Consumption
 */

#include <iostream>
using namespace std;

const int customers = 16500;    //Number of customers surveyed
const float percentWPED = .15; //Percent who purchase energy drinks
const float percentWPCFED = .58; //Percent who prefer citrus flavored drinks

int main(int argc, char** argv) {
     
    int CWPED;  //Number of customers who purchase energy drinks
    int CWPCFED;    //Number of customers who prefer citrus flavored drinks
    
    CWPED = customers * percentWPED;
    cout << "The approximate number of customers who purchase one or more "
            "energy drinks per week is " <<CWPED <<".\n";
    
    CWPCFED = CWPED * percentWPCFED;
    cout << "The approximate number of customers who prefer citrus flavored "
            "energy drinks is " <<CWPCFED <<".";
    
    return 0;
}