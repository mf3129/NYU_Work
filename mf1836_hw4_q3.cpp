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

using namespace std;

int main() {
    
    //Declaring variables
    int binaryArray[32];
    int userNumber;
    
    
    cout << "Enter a postive number: " << endl;
    cin >> userNumber;
    
    
    int i = 0;
    
    //While loop to fill the array with binary numbers
    while (userNumber > 0) {
        
        binaryArray[i] = userNumber % 2;
        userNumber /= 2;
        i++;
        
    }
    
    
    //Reverse the order of the array
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryArray[j];
    }
    
    
    
    
    return 0;
}
