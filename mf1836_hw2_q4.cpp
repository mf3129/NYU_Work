/* Makan Fofana
 Homework #2
 
 Question 4:
 Write a program that reads from the user two positive integers, and prints the result of when we add, subtract multiply, divide, div and mod them.
 Your program should interact with the user exactly as it shows in the following example: Please enter two positive integers, separated by a space:
 14 4
 14 + 4 = 18
 14 – 4 = 10 14 * 4 = 56 14 / 4 = 3.5 14 div 4 = 3 14 mod 4 = 2

*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int firstNumber, secondNumber;
    
    cout << "Type in two positive numbers greater than 0: " << endl;
    cin >> firstNumber >> secondNumber;
    
    if (firstNumber > 0 && secondNumber > 0) {
        
        cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
        cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
        cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
        cout << firstNumber << " / " << secondNumber << " = " << (float)firstNumber / (float)secondNumber << endl;
        cout << firstNumber << " div " << secondNumber << " = " << firstNumber / secondNumber << endl;
        cout << firstNumber << " mod " << secondNumber << " = " << firstNumber % secondNumber << endl;
        
    } else {
        
        do {
            
            cout << "Type in two positive numbers greater than 0: " << endl;
            cin >> firstNumber >> secondNumber;
            
        } while (firstNumber < 0 || secondNumber < 0);
        
        cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
        cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
        cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
        cout << firstNumber << " / " << secondNumber << " = " << (float)firstNumber / (float)secondNumber << endl;
        cout << firstNumber << " div " << secondNumber << " = " << firstNumber / secondNumber << endl;
        cout << firstNumber << " mod " << secondNumber << " = " << firstNumber % secondNumber << endl;

    }
    
    return 0;
    
}
