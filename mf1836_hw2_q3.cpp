/* Makan Fofana
 Homework #2
 
 Question 3:
 
 Suppose John and Bill worked for some time and we want to calculate the total time both of
 them worked. Write a program that reads number of days, hours, minutes each of them
 
 Hint: Try to adapt the elementary method for addition of numbers to this use.
 Your program should interact with the user exactly as it shows in the following example: Please enter the number of days John has worked: 2
 Please enter the number of hours John has worked: 12
 Please enter the number of minutes John has worked: 15
 Please enter the number of days Bill has worked: 3 Please enter the number of hours Bill has worked: 15 Please enter the number of minutes Bill has worked: 20
 The total time both of them worked together is: 6 days, 3 hours and 35 minutes
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    
    int johnDays, johnHours, johnMinutes, billDays, billHours, BillMinutes;
    
    
    cout << "Please enter the number of days John has worked: " << endl;
    cin >> johnDays;
    
    cout << "Please enter the number of hours John has worked: " << endl;
    cin >> johnHours;
    
    cout << "Please enter the number of minutes John has worked: " << endl;
    cin >> johnMinutes;
    cout << endl;
    
    cout << "Please enter the number of days Bill has worked: " << endl;
    cin >> billDays;
    
    cout << "Please enter the number of hours Bill has worked: " << endl;
    cin >> billHours;
    
    cout << "Please enter the number of minutes Bill has worked: " << endl;
    cin >> BillMinutes;
    
    cout << "The total time both of them worked together is: " << johnDays + billDays << " days, " << johnHours + billHours << " hours and " <<  johnMinutes + BillMinutes << " minutes" << endl;
    
    return 0;
    
}

