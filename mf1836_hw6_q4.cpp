//
//  main.cpp
//  mf1836_hw6_q4.cpp
//
//  Created by Makan fofana on 8/22/19.
////  Copyright © 2019 Makan fofana. All rights reserved.
//    Question 4:
//    a.
//    Implement a function:
//    void printDivisors(int num)
//    This function is given a positive integer num, and prints all of num’s divisors in an ascending
//    order, separated by a space.
//    For Example, if we call printDivisors(100), the expected output is:
//    1 2 4 5 10 20 25 50 100
//

#include <iostream>
#include <cmath>

using namespace std;


                                /**********************  PART A ********************/
void printDivisors(int num) {
    
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    for (int i = sqrt(num); i >= 1; i--) {
        if (num % i == 0 && i != sqrt(num)) {
            cout << num/i << " ";
        }
    }
    
    
}


int main() {
    
    printDivisors(100);

    return 0;
}


                            /**********************  PART B ********************/
/*

void printDivisors(int num) {
    
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    for (int i = sqrt(num); i >= 1; i--) {
        if (num % i == 0 && i != sqrt(num)) {
            cout << num/i << " ";
        }
    }
    

}


int main() {

    int userNumber;
    
    cout << "Please enter a positive integer >= 2: ";
    cin >> userNumber;
    
    printDivisors(userNumber);
    
    
    return 0;
}

*/
