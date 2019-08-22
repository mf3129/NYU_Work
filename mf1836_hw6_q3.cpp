////
////  main.cpp
////  mf1836_hw6_q3.cpp
////
////  Created by Makan fofana on 8/22/19.
////  Copyright © 2019 Makan fofana. All rights reserved.
//
//    Question 3:
//    The number e is an important mathematical constant that is the base of the natural logarithm. e also arises in the study of compound interest, and in many other applications.
//    Background of e: https://en.wikipedia.org/wiki/E_(mathematical_constant)
////

#include <iostream>

using namespace std;

double eApprox(int n) {
    
    double totalSum = 1.0;
    double individualSum = 1.0;
    
    
    for (int i = n - 1; i > 0; --i) {
        totalSum = 1 + individualSum * totalSum/i;
    }
    
    return totalSum;
}




int main() {
    
    cout.precision(30);
    
    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }

    return 0;
}
