/* Makan Fofana
Homework #2

Question 2:
Write a program that asks the user to enter an amount of money in the format of dollars and
remaining cents. The program should calculate and print the minimum number of coins
(quarters, dimes, nickels and pennies) that are equivalent to the given amount.
Hint: In order to find the minimum number of coins, first find the maximum number of
quarters that fit in the given amount of money, then find the maximum number of dimes
that fit in the remaining amount, and so on.
Your program should interact with the user exactly as it shows in the following example: Please enter your amount in the format of dollars and cents separated by a space:
4 37
4 dollars and 37 cents are:
17 quarters, 1 dimes, 0 nickels and 2 pennies
*/


#include <iostream>
#include <string>
#include <cmath>

const int CENTS = 100;
const int VALUE_OF_QUARTER = 25;
const int VALUE_OF_DIME = 10;
const int VALUE_OF_NICKEL = 5;

using namespace std;

int main() {
    
    int dollarInPennies;
    int dollarAmount, changeAmount, quarterAmount, dimeAmount, dimeRemainder, nickelAmount, nickelRemainder, pennyAmount, pennyRemainder;
    
    
    cout << "Please enter your amount in the format of dollars and cents seperated by a space: " << endl;
    cin >> dollarAmount >> changeAmount;
    
    //Transforming dollar amount to pennies
    dollarInPennies = dollarAmount * CENTS;
    
    //Calculating total quarter amount
    quarterAmount = dollarInPennies / VALUE_OF_QUARTER;
    
    //Calculating dime change and remainder mount
    dimeAmount = changeAmount / VALUE_OF_DIME;
    dimeRemainder = changeAmount % VALUE_OF_DIME;
    
    //Calculating nickel amount and remainder
    nickelAmount = dimeRemainder / VALUE_OF_NICKEL;
    nickelRemainder = dimeRemainder % VALUE_OF_NICKEL;
    
    //Calculating penny amount and remainder
    pennyAmount = nickelRemainder / 1;
    
    cout << quarterAmount << " quarters, " << dimeAmount << " dimes, " << nickelAmount << " nickels" << " and " << pennyAmount << " pennies" << endl;
    
    

    return 0;
    
}
