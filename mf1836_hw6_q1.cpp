//
//  main.cpp
//  mf1836_hw6_q1
//
//  Created by Makan fofana on 8/22/19.
//  Copyright © 2019 Makan fofana. All rights reserved.

//    Question 1:
//    The Fibonacci numbers sequence, Fn, is defined as follows:
//    F1 is1,F2 is1,andFn =Fn-1 +Fn-2 
//forn=3,4,5,...
//

#include <iostream>

using namespace std;


int fib (int n) {
    
    int sum = 0;
    int previousNum = 0;
    int currNum = 1;
    
    //While loop while n is greater than 1
    while (n > 1) {
        //Add current number to previous number
        sum = previousNum + currNum;
        //Setting previous number to current number
        previousNum = currNum;
        //Setting currentNum equal to sum
        currNum = sum;
        //Decrement n
        n--;
    }
    
    //Returning the sum
    return sum;
    
}




int main() {
    
    int userNumber = 0;
    
    //Ask user question
    cout << "Please enter a positve integer: ";
    cin >> userNumber;
    
    //Call and printing the function here
    cout << fib(userNumber) << endl;
    
    return 0;
}

