// Makan Fofana
//
//  main.cpp
//  mf1836_hw5_q2.cpp
//
//  Created by Makan fofana on 8/6/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//Question 2:
//Implement a number guessing game. The program should randomly choose an integer between 1 and 100 (inclusive), and have the user try to guess that number.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int NUMBER_OF_GUESSES = 5;

int main(){
    int n, userGuess;
    string guessStatus;
    
    srand(time(0));
    
    n = (rand() % 100) + 1; // selecting a random value in [1, 100] for n
    
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    
    int guessesRemaining = NUMBER_OF_GUESSES;
    bool numberHasBeenGuessed = false;
    int lowerGuessLimit = 1;
    int upperGuessLimit = 100;
    
    while((!numberHasBeenGuessed) && (guessesRemaining > 0)){
        cout << "Range: [" << lowerGuessLimit << ", " << upperGuessLimit << "], ";
        cout << "Number of guesses left: " << guessesRemaining << endl;
        cout << "Your guess: ";
        cin >> userGuess;
        
        guessesRemaining--;
        
        // Calculating the userGuesses
        
        if (userGuess < n) {
            guessStatus = "bigger";
            lowerGuessLimit = userGuess + 1;
        } else if (userGuess > n) {
            guessStatus = "smaller";
            upperGuessLimit = userGuess - 1;
        } else { //userGuess == n
            numberHasBeenGuessed = true;
        }
        
        //While the while loo[ is true
        if ((guessesRemaining > 0) && (!numberHasBeenGuessed)){
            cout << "Wrong! My number is " << guessStatus << "." << endl;
            cout << endl;
        }
    }
    

    if (numberHasBeenGuessed) {
        cout << "Congrats! You guessed my number in " << (NUMBER_OF_GUESSES - guessesRemaining) << " guesses." << endl;
    } else {
        cout << "Out of guesses! My number is " << n << endl;
    }
    
    return 0;
    
}
