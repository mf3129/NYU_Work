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


            /******************************       2B        ******************************/
//void printPineTree(int n, char symbol)
//It prints a sequence of n triangles of increasing sizes (the smallest triangle is a 2-line triangle), which form the shape of a pine tree. The triangles are filled with the symbol character.


void printPineTree(int n, char symbol) {
    
    //Prints number of triangles
    for (int i = 1; i <= n; i++) {
        //Prints rows
        for (int row = 1; row <= i + 1 ; row++) {
            
            //Prints Columns
            for (int spaceCount = 1; spaceCount <= (n - row) + 1  ; spaceCount++) {
                cout << " ";
            }
            for (int starCount = 1; starCount <= (row * 2) - 1; starCount++) {
                cout << symbol;
            }
    
            //Breaking the line
            cout << endl;
        }
        
    }
}


int main() {
    
    int triangleSize = 0;
    int spaces = 1;
    char userSymbol;
    
    cout << "Enter the size of the triangle and characters seperated by a space: ";
    cin >> triangleSize >> userSymbol;
    
    //Print the function
    printPineTree(triangleSize, userSymbol);
    
    return 0;
}








                    /******************************       2A        ******************************/

//void printShiftedTriangle(int n, int m, char symbol){
//    for (int row = 1; row <= n; row++) {
//        //Columns
//        for (int spaceCount = 1; spaceCount <= (n - row) + m ; spaceCount++) {
//            cout << " ";
//        }
//        for (int starCount = 1; starCount <= (row * 2) - 1; starCount++) {
//            cout << symbol;
//        }
//
//        //Breaking the line
//        cout << endl;
//    }
//}
//
//
//int main() {
//
//    int triangleSize = 0;
//    int spaces = 1;
//    char userSymbol;
//
//    cout << "Enter the size of the triangle, spaces from left margin and characters seperated by a space: ";
//    cin >> triangleSize >> spaces >> userSymbol;
//
//    //Print the function
//    printShiftedTriangle(triangleSize, spaces, userSymbol);
//
//
//    return 0;
//}
//
