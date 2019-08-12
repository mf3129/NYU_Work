// Makan Fofana
//Question 2:
//Implement a number guessing game. The program should randomly choose an integer between 1 and 100 (inclusive), and have the user try to guess that number.
//


#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
    
    int range1, range2, ranNumTo99, ranNum1To100ForRange,  ranNum1To100ForComparison ;
    int userGuess, userGuessPlusOne, userGuessAttempts, numberOfGuessesLeft;
    bool firstGuess = true;
    bool outOfGuesses = false;
    
    srand(time(0));
    
    range1 = rand();
    range2 = rand();
    ranNumTo99 = rand() % 100;
    ranNum1To100ForRange = (rand() % 100) + 1;
    ranNum1To100ForComparison = (rand() % 100) + 1;
    numberOfGuessesLeft = 5;
    userGuessAttempts = 1;
    userGuessPlusOne = 0;
    
    
    while (outOfGuesses == false) {

        if (firstGuess == true) {
            
            cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
            cin >> userGuess;
            
            userGuessPlusOne = userGuess + 1;
            
            cout << "Range: [1, 100], Number of guesses left: " << numberOfGuessesLeft << endl;
            cout << "Your Guess: " << userGuess << endl;
            
             //If user guess is equal to the new randomValue -> print the congrats message else continue to ask user question
            if (userGuess == ranNum1To100ForComparison) {
                cout << "Congrats! You guessed my number in" << userGuessAttempts << " guesses." << endl;
                outOfGuesses = true;
            } else {
                if (ranNum1To100ForComparison > userGuess) {
                    cout << "Wrong! My number is bigger." << endl;
                    userGuessAttempts++;
                    cout << endl;
                } else {
                    cout << "Wrong! My number is smaller." << endl;
                    userGuessAttempts++;
                    cout << endl;
                }
            }
            
            //Decrement User Guesses
            numberOfGuessesLeft--;
            
            //Turning of first Guess
            firstGuess = false;
            
            
        } else {
            
            //Initialize a new end range for each iteration
            ranNum1To100ForRange = (rand() % 100) + 1;
            ranNum1To100ForComparison = (rand() % 100) + 1;
            
            //Making sure the random end number is greater than user guess
            if (ranNum1To100ForRange > userGuess) {
                ranNum1To100ForRange = ranNum1To100ForRange;
            } else {
                while (ranNum1To100ForRange < userGuess) {
                    ranNum1To100ForRange = (rand() % 100) + 1;
                }
            }
            
            //Making sure the random number is in range
            if (ranNum1To100ForComparison >= userGuessPlusOne && ranNum1To100ForComparison <= ranNum1To100ForRange) {
                ranNum1To100ForComparison = ranNum1To100ForComparison;
            } else {
                while (ranNum1To100ForComparison < userGuessPlusOne || ranNum1To100ForComparison > ranNum1To100ForRange) {
                    ranNum1To100ForComparison = (rand() % 100) + 1;
                }
            }
            
            
            cout << "Range: [" << userGuessPlusOne << ", " << ranNum1To100ForRange << "], "<< "Number of guesses left: " << numberOfGuessesLeft << endl;
            cout << "Your Guess: ";
            cin >> userGuess;
            
            
//            cout << "Here is my guess plus one - "<< userGuessPlusOne << endl;

           

            //If user guess is equal to the new randomValue -> print the congrats message else continue to ask user question
            if (userGuess == ranNum1To100ForComparison) {
                cout << "Congrats! You guessed my number in " << userGuessAttempts << " guesses."<< endl;
                outOfGuesses = true;
            } else if (userGuessAttempts == 5) {
                    cout << "Out of guesses! My number is " << ranNum1To100ForComparison << endl;
                    outOfGuesses = true;
            } else if (ranNum1To100ForComparison > userGuess) {
                    cout << "Wrong! My number is bigger." << endl;
                    cout << "Rand Num chosen " <<  ranNum1To100ForComparison << endl;
                    cout << endl;

                    userGuessAttempts++;
            } else {
                    cout << "Wrong! My number is smaller." << endl;
                cout << "Rand Num chosen " <<  ranNum1To100ForComparison << endl;
                    cout << endl;
                    userGuessAttempts++;
            }


            //Decrement User Guesses
            numberOfGuessesLeft--;

        }
        

    
    
    }
    
     return 0;
  }


    
    //Create new range for user
    
    //Create new random guess value
    
   
    
    //Decrement the numberOfGuessesLeft
    
    //Print whether the userGuess is greater or less than the randomGuessValue
    
    //If guesses left equals 0, print out of guesses! Print the
    
    
    
    //    cout << x1 << " " << x2 << " " << x3  << " " << x4;
    
    
    
