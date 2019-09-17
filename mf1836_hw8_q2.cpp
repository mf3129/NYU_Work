//
//  main.cpp
//  mf1836_hw8_q2.cpp
//
//  Created by Makan fofana on 9/17/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//Prototype
bool isPalindrome(string str);


int main() {

    string userWord;
    
    cout << "Please enter a word: " << endl;
    cin >> userWord;
    
    isPalindrome(userWord);
    
    return 0;
}




//Declarations
bool isPalindrome(string str) {
    
    string words;
    int i, j;
    int count = 0;
    
    for (i = 0 ; i <= str.length() ; i++) {
        words[i-1] = str[str.length() - i];
    }
    
    for (j = 0; j < str.length() ; j++) {
        if (words[j] == str[j]) {
            count++;
        }
    }
    
//    //DEBUGGER
//    for (int m = 0; m < str.length() ; m++) {
//        cout << "Index: " << m << " " << words[m] << endl;
//    }
    
    if (count == str.length()) {
        cout <<  str << " is a palindrome." << endl;
    } else {
        cout <<  str << " is not a palindrome." << endl;
    }

    return true;
}
