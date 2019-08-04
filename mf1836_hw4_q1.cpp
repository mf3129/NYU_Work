//
//  main.cpp
//  mf1836_hw4_q1
//
//  Created by Makan fofana on 8/4/19.
//  Copyright © 2019 Makan fofana. All rights reserved.



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
