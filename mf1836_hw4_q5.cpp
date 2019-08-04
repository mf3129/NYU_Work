//
//  main.cpp
//  mf1836_hw4_q5.cpp
//
//  Created by Makan fofana on 8/4/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//
//    Question 5:
//    Write a program that asks the user to input a positive integer n, and prints a textual image of an
//    hourglass made of 2n lines with asterisks.
//    For example if n=4, the program should print:
//
//

//

#include <iostream>

using namespace std;

int main() {

    int userValue, numberOfRows;
    
    cout << "Enter a postive integer" << endl;
    cin >> userValue;
    
    numberOfRows = userValue;
    
    
    //Top of triangle print out
    
    for (int row = numberOfRows; row >= 1; row--) {
        
        for (int colSpace = 1; colSpace <= numberOfRows - row; colSpace++) {
            cout << " ";
        }
        
        for (int colStar = 1; colStar <= (row * 2) - 1; colStar++) {
            cout << "*";
        }
        
        
        cout << "\n";
        
    }
    
    
    //Bottom of the triangle Print out

    for (int row = 1; row <= numberOfRows; row++) {

        for (int colSpace = numberOfRows - row; colSpace >= 1; colSpace--) {
            cout << " ";
        }

        for (int colStar = 1; colStar <= (row * 2) - 1; colStar++) {
            cout << "*";
        }

        cout << "\n";

    }
    
    
    
    return 0;
}
