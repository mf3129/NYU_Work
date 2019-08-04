//
//  main.cpp
//  mf1836_hw4_q1
//
//  Created by Makan fofana on 8/4/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//
//Write two versions of a program that reads a positive integer n, and prints the first n even numbers.
//a) In the first, use a while loop.
//b) In the second, use a for loop.
//Each section should interact with the user exactly as it shows in the following example: Please enter a positive integer: 3
//2
//4
//6
//
//

#include <iostream>

using namespace std;

int main() {
    
// A) While Loop
 
//    Variables
    double userEnteredInteger = 0;
 
//    Asking User A Question
    cout << "Please enter a postive integer: ";
    cin >> userEnteredInteger;
 
    
//    Creating a count variable
    double count = 1;
 
    while (count <= userEnteredInteger) {
        cout << count * 2 << endl;
        count++;
    }

    
/* B) For Loop
    
    //Variables
    double userEnteredInteger = 0;
    
    //Asking User A Question
    cout << "Please enter a postive integer: ";
    cin >> userEnteredInteger;
    
    
    for (double count = 1; count <= userEnteredInteger; count++) {
        cout << count * 2 << endl;
    }
*/
    
    return 0;
    
}
