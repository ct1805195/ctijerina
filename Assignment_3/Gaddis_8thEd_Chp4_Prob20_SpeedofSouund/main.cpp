/* 
  File:   main.cpp
  Author: Chris Tijerina
  Created on January 3, 2017, 2:15 PM
  Purpose: Gaddis Homework Assignment3 Chp4 Prob13 Book Club points 
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
   
    int choice; // To hold a menu choice
    const int airCHOICE = 1,
              waterCHOICE = 2,
              steelCHOICE = 3,
              QUIT_CHOICE = 4;
    float distanceAir, distanceWater, distanceSteel;
    float timeAir, timeWater, timeSteel;
    
    
    // Display the menu and get a choice.
        cout << "\t\tSelect Air, Water or Steel.\n\n"
        << "1. Air\n"
        << "2. Water\n"
        << "3. Steel\n"
        << "4. Quit\n"
        << "Enter your choice: ";
        cin >> choice;
          
        cout << fixed << showpoint << setprecision(2);
        
        // Respond to the user's menu selection.
        if (choice == airCHOICE)
        {
            cout << "How many feet will the sound wave travel? ";
            cin >> distanceAir;
            timeAir = distanceAir * 1100;          
            cout << "Amount of seconds it will take is " << timeAir << endl;
            }             
                    
        else if (choice == waterCHOICE)
        {
            cout << "How many feet will the sound wave travel? ";
            cin>> distanceWater;
            timeWater = distanceWater * 4900;
            cout << "Amount of seconds it will take is " << timeWater << endl;
        }
        else if (choice == steelCHOICE)
        {
            cout << "How many feet will the sound wave travel? ";
            cin >> distanceSteel;
            timeSteel = distanceSteel * 16400;
            cout << "Amount of seconds it will take is " << timeSteel << endl;
        }
            else if (choice == QUIT_CHOICE)
        {
            cout << "Program ending.\n";
        }
         
        else
        {
            cout << "The valid choices are 1 through 4. Run the\n"
                    << "program again and select one of those.\n";
        }

        return 0;
}