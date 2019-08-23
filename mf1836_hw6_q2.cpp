//
//  main.cpp
//  mf1836_hw6_q2.cpp
//
//  Created by Makan fofana on 8/22/19.
//    Question 2:
//    Your program should interact with the user to read the number of triangles in the tree and the character filling the tree.
//    Your implementation should include the following functions:
//    a. voidprintShiftedTriangle(intn,intm,charsymbol)
//    Write a program that, prints a ‘pine tree’ consisting of triangles of increasing sizes, filled
//  Copyright © 2019 Makan fofana. All rights reserved.
//


#include <iostream>

using namespace std;

//Declaring the function prototype

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);




int main() {
    
    int triangleSize = 0;
    int spaces = 1;
    char userSymbol;
    
    cout << "Enter the size of the triangle and characters seperated by a space: ";
    cin >> triangleSize >> userSymbol;
    
    //Calling the function
    printPineTree(triangleSize, userSymbol);
    
    return 0;
}


//Defining the functions

void printPineTree(int n, char symbol) {
    
    //Prints number of triangles
    for (int i = 1; i <= n; i++) {
        //Prints rows
        printShiftedTriangle(i + 1, n, symbol);
    }
    
}

void printShiftedTriangle(int n, int m, char symbol) {
    
    //Declaring variables
    int countForSymbol;
    int row;
    
    //Number of Rows - Derementing space by count of 1 and incrermenting by count of 2. 
    for (row = 1, countForSymbol = 1; row <= n; row++, m--, countForSymbol+=2) {
        
        //Number of Columns
        for (int spaceCount = 1; spaceCount <=  m ; spaceCount++) {
            cout << " ";
        }
        for (int starCount = 1; starCount <= countForSymbol; starCount++) {
            cout << symbol;
        }
    
        cout << endl;
    }
    
}
