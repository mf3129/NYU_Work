//
//  main.cpp
//  mf1836_hw4_q6.cpp
//
//  Created by Makan fofana on 8/6/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//    Question 6:
//    Write a program that asks the user to input a positive integer n, and print all of the numbers from 1 to n that have more even digits than odd digits.
//    For example, if n=30, the program should print:
//

#include <iostream>

using namespace std;

int main() {
    
    //Variables
    int positiveInteger, numberValue;
    int evenIntegerCount, oddIntegerCount;
    int currDigit;
    
    //Asking User A Question
    cout << "Enter a positive integer: " << endl;
    cin >> positiveInteger;
    
    //Entering for loop to cycle up to the user entered integer
    for (int i = 1; i <= positiveInteger; i++) {
        
            numberValue = i;
            evenIntegerCount = 0;
            oddIntegerCount = 0;
        
            while (i != 0) {
                
                    //Storing the current value
                    currDigit = i % 10;
                
                    //Determining if value is even or odd
                    if (currDigit % 2 == 0) {
                        evenIntegerCount++;
                    } else {
                        oddIntegerCount++;
                    }
                
                    // Moving to next digit
                    i /= 10;
                
            }
            
            //Ressetting Value of i
            i = numberValue;
            
            if (evenIntegerCount > oddIntegerCount) {
                cout << numberValue << endl;
            }
        
        
    }

    
    return 0;
}



//if (i % 2 == 0) {
//
//    evenIntegerCount = 0;
//    oddIntegerCount = 0;
//
//    while (positiveInteger > 0) {
//        value = i;
//        //Storing the current value
//        currDigit = positiveInteger % 10;
//
//        //Determining if value is even or odd
//        if (currDigit % 2 == 0) {
//            evenIntegerCount++;
//        } else {
//            oddIntegerCount++;
//        }
//
//        // Moving to next digit
//        positiveInteger /= 10;
//
//    }
//
//    //Printing the full number value and resetting even & odd integer account to 0 for each new iteration.
//    i = value;
//
//    if (evenIntegerCount > oddIntegerCount) {
//        cout << i << endl;
//        }
//
//        //Resetting Values
//        positiveInteger = originalNumber;
//
//        }
