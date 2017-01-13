/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 9:25 PM
  Purpose:Gaddis Chp3 #11 Car Costs
 */
#include <iostream>
using namespace std;

int main() 
{
    float  loanPayment;
    float  insurance;
    float  gas;
    float  oil;
    float  tires;
    float  maintenance;
    float  total;
    float  annualCost;
 
    cout << "Enter the monthly costs for the loan payment:" ;
    cin >> loanPayment;
    cout << "Enter the monthly costs for the insurance:" ;
    cin>>  insurance;
    cout << "Enter the monthly costs for the gas:" ;
    cin>> gas;
    cout << "Enter the monthly costs for the oil:";
    cin>> oil;
    cout << "Enter the monthly costs for the tires:";
    cin>> tires;
    cout << "Enter the monthly costs for the maintenance:";
    cin>> maintenance;
    total = loanPayment + insurance + gas + oil + tires + maintenance;
    cout<< "The total monthly cost of these expenses is " << total<< "." <<endl;
    annualCost = total * 12;
    cout<< "The total annual cost of these expenses is " <<annualCost<<"." <<endl;
    
    return 0;
}