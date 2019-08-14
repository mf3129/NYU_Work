//
//  main.cpp
//  Exam1Practice
//
//  Created by Makan fofana on 8/14/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int row, numberOfRows, starCount, spaceCount, tableSize;

    cout << "Enter a number please? ";
    cin >> numberOfRows;
    
//    1
//    10
//    101
//    1010
//    10101
//    101010
    
    //Print Number of rows
    for (row = 1; row <= numberOfRows; row++) {
        //Print number of columns
        //Print number of stars
        for (starCount = 1; starCount <= row; starCount++) {
            if (starCount % 2 == 1) {
                cout << "1";
            } else {
                cout << "0";
            }
            
        }
        
        cout << endl;
    }
    

    
        /************************************     Printing 1 star increment triangle per line and the turned it into a Diamond     ***************************/
    
//    //Print number of rows=
//    for (int row = 1; row <= tableSize; row++) {
//
//        //Print Columns
//            //Number Of Spaces
//        for (spaceCount = 0; spaceCount < tableSize - row ; spaceCount++) {
//            cout << " ";
//        }
//            //Number Of Stars
//        for (starCount = 0; starCount < row ; starCount++) {
//            cout << "* ";
//        }
//
//        //end the line
//        cout << endl;
//    }
//
//    //Print number of rows=
//    for (int row = tableSize-1; row >= 1; row--) {
//
//        //Print Columns
//        //Number Of Spaces
//        for (spaceCount = 0; spaceCount < tableSize - row ; spaceCount++) {
//            cout << " ";
//        }
//        //Number Of Stars
//        for (starCount = 0; starCount < row ; starCount++) {
//            cout << "* ";
//        }
//
//        //end the line
//        cout << endl;
//    }
    
    
    //Print number of columns
    
    
    
    
    
    
    /************************************     Printing Diamond     ***************************/
//
//       int lineNumber, starCount, spaceCount, tableSize;
//
//    //Printing out rows
//    for (int lineNumber = 1; lineNumber <= tableSize ; lineNumber++) {
//        //Printing out columns
//            //Number of spaces for line
//        for (spaceCount = 0; spaceCount < tableSize - lineNumber; spaceCount++) {
//            cout << " ";
//        }
//            //Number of Stars for line
//        for (starCount = 0; starCount < (lineNumber *2) -1 ; starCount++) {
//            cout << "*";
//        }
//
//        //End line
//        cout << endl;
//
//    }
//
//
//    //Printing out rows
//    for (int lineNumber = tableSize-1; lineNumber >= 1 ; lineNumber--) {
//        //Printing out columns
//        //Number of spaces for line
//        for (spaceCount = 0; spaceCount < tableSize - lineNumber; spaceCount++) {
//            cout << " ";
//        }
//        //Number of Stars for line
//        for (starCount = 0; starCount < (lineNumber *2) -1 ; starCount++) {
//            cout << "*";
//        }
//
//        //End line
//        cout << endl;
//
//    }
    
    
    
                                        /*************************** Printing Practice *****************************/
    
//    //Two Upside Downn Triangles
//
//    //Top Triangle
//    //Printing Rows
//    for (lineNumber = 0; lineNumber <= tableSize; lineNumber++) {
//
//        int n = tableSize - lineNumber;
//
//        //Printing Columns
//        for (starCount = 1; starCount <= n ; starCount++) {
//            cout << "* ";
//        }
//        //End of line through cout endl
//        cout << endl;
//    }
//
//    //Bottom Triangle
//    //Printing Rows
//    for (lineNumber = 1; lineNumber <= tableSize; lineNumber++) {
//
//        //Printing Columns
//        for (starCount = 1; starCount <= lineNumber ; starCount++) {
//            cout << "* ";
//        }
//        //End of line through cout endl
//        cout << endl;
//    }

    return 0;
}
