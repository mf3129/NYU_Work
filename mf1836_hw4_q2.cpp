//
//  main.cpp
//  mf1836_hw4_q1.cpp
//
//  Created by Makan fofana on 8/4/19.
//  Copyright © 2019 Makan fofana. All rights reserved.

//Question 2
//In this question we will use a simplified version of the Roman Numerals System to represent
//positive integers.
//The digits in this system are I, V, X, L, C, D and M. Each digit corresponds to a decimal value, as
//showed in the following table.

//

#include <iostream>

using namespace std;

const int M = 1000;
const int D = 500;
const int C = 100;
const int L = 50;
const int X = 10;
const int V = 5;
const int I = 1;

int main() {

    int userDecimalNumber, decimalNumber;
    string romanDigitAmount = "";

    // Store user input
    cout << "Enter a decimal number: " << endl;
    cin >> decimalNumber;
    
    //Keeping the original value to print the cout statement at the end.
    userDecimalNumber = decimalNumber;
    
    // Using user input to determine the amount of times the character should be printed.
    //The program will run through the neccesary function to complete
    romanDigitAmount = string(decimalNumber/M, 'M');
    decimalNumber %= 1000;
    
    romanDigitAmount += string(decimalNumber/D, 'D');
    decimalNumber %= 500;
    
    romanDigitAmount += string(decimalNumber/C, 'C');
    decimalNumber %= 100;
    
    romanDigitAmount += string(decimalNumber/L, 'L');
    decimalNumber %= 50;
    
    romanDigitAmount += string(decimalNumber/X, 'X');
    decimalNumber %= 10;
    
    romanDigitAmount += string(decimalNumber/V, 'V');
    decimalNumber %= 5;
    
    romanDigitAmount += string(decimalNumber/I, 'I');
    
    cout << userDecimalNumber << " is " << romanDigitAmount <<endl;
    
    
    return 0;
}
