/* 
  File:   main.cpp
  Author: Christopher Tijerina
  Created on January 11, 2017, 12:15 PM
  Purpose: Gaddis Chp 3 #24
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  name;
    string  age;
    string  city;
    string  college;
    string  profession;
    string  animal;
    string  petsName;
 
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your age: ";
    getline(cin, age);
    cout << "Enter the city you live in: ";
    getline(cin, city);
    cout << "Please enter a college: ";
    getline(cin, college);
    cout << "Please enter your profession: ";
    getline(cin, profession);
    cout << "Please enter an animal: ";
    getline(cin, animal);
    cout << "Please enter your pet’s name: ";
    getline(cin, petsName);

    cout << "There once was a person named " << name;
    cout << " who lived in " << city;
    cout << ". At the age of " << age;
    cout << ","<<name;
    cout << " went to college at " << college;
    cout << ". " << name << " graduated and went to work as a " <<profession;
    cout << ". Then " << name << " adopted a "<<animal<<" named "<<petsName;
    cout <<". They both lived happily ever after!";

    return 0;
}