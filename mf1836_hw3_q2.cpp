//
//  main.cpp
//  mf1836_hw3_q2.cpp
//
//  Created by Makan fofana on 7/30/19.

//  Copyright © 2019 Makan fofana. All rights reserved.
//Question 2:
//Write a program that:
//• Asks the user for their name.
//• Asks the user to input their graduation year.
//• Asks the user to input the current year.
//Assume the student is in a four-year undergraduate program. Display the current status the student is in. Possible status include: not in college yet, freshman, sophomore, junior, senior, graduated.
//Note: If graduation year equals to current year, status is ‘Graduated’; if graduation year is four years after current year, status is ‘Freshman’, etc.
//Your program should interact with the user exactly as it shows in the following example: Please enter your name: Jessica
//Please enter your graduation year: 2019
//Please enter current year: 2015
//Jessica, you are a Freshman
//



#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    //Creating Variables
    string name = "";
    string yearInWords;
    int graduationYear = 0;
    int currentYear = 0;
    
    //User Input
    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;
    
    cout << "Please enter the current year: ";
    cin >> currentYear;
    
    
    //If else statement to determine year
    if (graduationYear == currentYear) {
        yearInWords = "graduated";
        cout << name + ", you have " + yearInWords << endl;
    } else if (graduationYear - currentYear == 4) {
        yearInWords = "Freshman";
        cout << name + ", you are a " + yearInWords << endl;
    } else if (graduationYear - currentYear == 3) {
        yearInWords = "Sophmore";
        cout << name + ", you are a " + yearInWords << endl;
    } else if (graduationYear - currentYear == 2) {
        yearInWords = "Junior";
        cout << name + ", you are a " + yearInWords << endl;
    } else if (graduationYear - currentYear == 1) {
        yearInWords = "Senior";
        cout << name + ", you are a " + yearInWords << endl;
    }
    
    
    return 0;
}
