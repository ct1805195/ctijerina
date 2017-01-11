/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 9, 2017, 10:15 PM
  Purpose:  Cyborg Data Type Sizes
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    char cyborgChar;
    int cyborgInt;
    float cyborgFloat;
    double cyborgDouble;
    
    cout<< "A char has a data size of " <<sizeof(cyborgChar)<<" byte.\n";
    cout<< "A int has a data size of " <<sizeof(cyborgInt)<<" bytes.\n";
    cout<< "A float has a data size of " <<sizeof(cyborgFloat)<<" bytes.\n";
    cout<< "A double has a data size of " <<sizeof(cyborgDouble)<<" bytes.\n";
    
    return 0;
}