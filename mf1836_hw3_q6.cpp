//
//  main.cpp
//  mf1836_hw3_q6.cpp
//
//  Created by Makan fofana on 7/31/19.
//
//    Question 6:
//    Write a program that computes the cost of a long-distance call. The cost of  
//the call is determined according to the following rate schedule:
//    • Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is billed at a
//    rate of $0.40 per minute.  
//
//    • Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is charged
//    at a rate of $0.25 per minute.  
//
//    • Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.  
//
//    The input will consist of the day of the week, the time the call started, and the length of the call in minutes.
//    The output will be the cost of the call.
//    Notes:
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double MONFRI_8AM_TO_6PM = 0.40;
const double MONFRI_BEFORE_8AM_AFTER_6PM = 0.25;
const double SAT_OR_SUN_CHARGE = 0.15;

int main() {

    
    double firstTimeDigit, secondTimeDigit, minutes, totalPrice;
    char timeColon;
    string day;
    
    
    //Gathering user information
    cout << "Enter the time in 24 Hour Format (ex. 13:30): ";
    cin >> firstTimeDigit >> timeColon >> secondTimeDigit;
    
    cout << "Enter the day of the week (Ex: Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> day;
    
    cout << "How many minutes was the call? " << endl;
    cin >> minutes;
    
    
    //Determing The Weekday Rate
    if(firstTimeDigit >= 8 && firstTimeDigit < 18) {
        if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") {
            totalPrice = minutes * MONFRI_8AM_TO_6PM;
            cout << "The total price for the call is $" ;
            cout << setprecision(3) << totalPrice << endl;
        }
    } else if (firstTimeDigit < 8 || firstTimeDigit >= 18){
        if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") {
            totalPrice = minutes * MONFRI_BEFORE_8AM_AFTER_6PM;
            cout << "The total price for the call is $" ;
            cout << setprecision(3) << totalPrice << endl;
        }
    }
    
    //Determing The Weekend Rate
    if (day == "Sa" || day == "Su") {
        totalPrice = minutes * SAT_OR_SUN_CHARGE;
        cout << "The total price for the call is $" ;
        cout << setprecision(3) << totalPrice << endl;
    }
    
    
    
    
    return 0;
}
