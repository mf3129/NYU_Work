/*
  main.cpp
  mf1836_hw3_q4.cpp

  Created by Makan fofana on 7/30/19.

    Question 4:

    Define the following constants:
 
     const int FLOOR_ROUND = 1;
     const int CEILING_ROUND = 2;
     const int ROUND = 3;
 
    Write a program that asks the user to enter a Real number, then it asks the user to enter the method by which they want to round that number (floor, ceiling or to the nearest integer). The program will then print the rounded result.
    Your program should interact with the user exactly as it shows in the following example: Please enter a Real number:
    4.78
    Choose your rounding method:
    1. Floor round
    2. Ceiling round
    3. Round to the nearest whole number 2
    5
    Implementation requirement: Use a switch statement.
*/


#include <iostream>
#include <cmath>

using namespace std;


const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {

    double userNumber = 0, result;
    int optionChosen = 0, castedValue, castedValuePlusOne, castedValueMinusOne;
    
    //Storing User Value
    cout << "Please enter a real number: ";
    cin >> userNumber;
    
    //User to choose method
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> optionChosen;
    
    //Casting the values to determine the difference
    castedValue = (int)userNumber;
    castedValuePlusOne = (int)userNumber + 1;
    castedValueMinusOne = (int)userNumber - 1;
    

    //Switch statement to perfrom option chosen
    
    switch (optionChosen) {
        case FLOOR_ROUND:
            if (castedValue > 0) {
                cout << castedValue << endl;
            } else {
                if (castedValue - userNumber == 0) {
                   cout << castedValue << endl;
                } else {
                   cout << castedValueMinusOne << endl;
                }
            }
            break;
        case CEILING_ROUND:
            if (userNumber - castedValue > 0) {
                cout << castedValuePlusOne << endl;
            } else {
                cout << castedValue << endl;
            }
            break;
        case ROUND:
            if (castedValue > 0) {
                if (userNumber + 0.5 > castedValuePlusOne || userNumber == castedValue + 0.5) {
                    cout << castedValuePlusOne << endl;
                } else if (userNumber + 0.5 < castedValuePlusOne) {
                    cout << castedValue << endl;
                }
            } else {
                if (userNumber - 0.5 < castedValueMinusOne) {
                    cout << castedValueMinusOne << endl;
                } else if (userNumber - 0.5 > castedValueMinusOne) {
                    cout << castedValue << endl;
                } else {
                    cout << castedValue << endl;
                }
            }
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }

    
    return 0;
}
