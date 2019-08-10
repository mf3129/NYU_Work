//
//  main.cpp
//  mf1836_hw4_q3.cpp
//
//  Created by Makan fofana on 8/6/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//    Question 3:
//    Write a program that reads from the user a positive integer (in a decimal representation), and
//    prints its binary (base 2) representation.
//    Your program should interact with the user exactly as it shows in the following example: Enter decimal number:
//    76
//    The binary representation of 76 is 1001100
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    //Declaring variables
    int userNumber;
    int binaryNumber, remainder;
    
    
    cout << "Enter a postive number: " << endl;
    cin >> userNumber;
    
    //Initializing Variables
    int count = 1;
    binaryNumber = 0;
    remainder = 0;
    

    
    //While loop to fill the array with binary numbers
    while (userNumber != 0) {
        
        //Get the remainder
        remainder = userNumber % 2;
        
        //Halve the number
        userNumber /= 2;
        
        //Store binaryNumber
        binaryNumber += remainder * count;
        
        //Increment the counter
        count *= 10;
        
    }
    
    cout << binaryNumber << endl;
    
    
    return 0;
}
