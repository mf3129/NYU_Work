//
//  main.cpp
//  mf1836_hw7_q2.cpp
//
//  Created by Makan fofana on 8/27/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//    a. Write a function:
//    void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) The function takes as an input a positive integer num (≥ 2), and updates two output parameters with the number of num's proper divisors and their sum.
//    For example, if this function is called with num=12, since 1, 2, 3, 4 and 6 are 12s proper divisors, the function would update the output parameters with the numbers 5 and 16. Note:
//

#include <iostream>
#include <cmath>

using namespace std;

//Function Prototype
void analyzeDividors(int num, int& outCountDivs, int&outSumDivs);
bool isPerfect(int num);
int rangeOfNumbers(int num);



int main() {

    int userNumber;
    
    cout << "Enter a positive integer greater than or equal to 2: " << endl;
    cin >> userNumber;
    
    rangeOfNumbers(userNumber);
    
    return 0;
}



//Function Defintiions

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
    
    int count = 0;
    int sum = 0;
    
    //Setting for loop to iterate over the number of elements
    for (int i = 1; i <= sqrt(num); i++) {
        ///Determine if num % 2 == 0, the increase outCountDivs and add to sum.
        if (num % i == 0) {
            count++;
            sum += i;
        }
    }

    for (int j = sqrt(num) + 1; j < num ; j++) {
        if (num % j == 0) {
            count++;
            sum += j;
        }
    }
    
    

    outCountDivs = count;
    outSumDivs = sum;
    
//    cout << outCountDivs << endl;
//    cout << outSumDivs << endl;
    
    
}



bool isPerfect(int num) {
    
    int count;
    int outSum;
    
    analyzeDividors(num, count, outSum);
    
    if (outSum == num) {
        return true;
    } else {
        return false;
    }
    
}




int rangeOfNumbers(int num) {
    
    //Calling a for loop that ranges over the input
    cout << "Here are the perfect numbers: ";
    for (int i = 2; i <= num ; i++) {
        
        //Call the isPerfect function
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    
    cout << "Here are the amicable pairs: " << endl;
    for (int x = 2; x <= num ; x++) {
        int count = 0;
        int sumForFirst = 0;

        analyzeDividors (x, count, sumForFirst);

        int firstSum = sumForFirst;

        count = 0;
        sumForFirst = 0;
        analyzeDividors(firstSum, count, sumForFirst);

        int sumForSecond = sumForFirst;

        if(x < firstSum && (sumForSecond == x) && (firstSum <= num)) {
            cout << x << " | " << firstSum << endl;
        }
    }
    
    cout << endl;
    
    return 0;
}



