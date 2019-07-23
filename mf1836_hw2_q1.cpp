//Makan Fofana
//Homework #2



#include <iostream>
#include <string>
#include <cmath>

const int CENTS = 100;
const int VALUE_OF_QUARTER = 25;
const int VALUE_OF_DIME = 10;
const int VALUE_OF_NICKEL = 5;

using namespace std;

int main() {
    
    int numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies, totalAmount;
    int quarterAmount, dimeAmount, nickelAmount, pennyAmount, dollarRemainder, changeRemainder;
    
    cout << "Please enter the number of coins" << endl;
    
    //User Input
    cout << "# of quarters: ";
    cin >> numberOfQuarters;
    
    cout << "# of dimes: ";
    cin >> numberOfDimes;
    
    cout << "# of nickels: ";
    cin >> numberOfNickels;
    
    cout << "# of pennies: ";
    cin >> numberOfPennies;
    
    //Changing to the dollar amount
    quarterAmount = (numberOfQuarters * VALUE_OF_QUARTER);
    dimeAmount = (numberOfDimes * VALUE_OF_DIME);
    nickelAmount = (numberOfNickels * VALUE_OF_NICKEL);
    pennyAmount = (numberOfPennies);
    
    //Calculating the total amount in pennies
    totalAmount = quarterAmount + dimeAmount + nickelAmount + pennyAmount;
    
    //Acquiring the dollar amount
    dollarRemainder = totalAmount / CENTS;
    
    //Acquiring the remainder amount
    changeRemainder = totalAmount % CENTS;
    
    cout << "The total is " << dollarRemainder << " dollars and " << changeRemainder << " cents " << endl;

    
    
    return 0;
}
