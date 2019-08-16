#include <iostream>
#include<cstdlib>
#include <ctime>


using namespace std;

const int MAX_GUESSES = 5;

int main ()

{
    
    int num, low = 1, high = 100;
    int guess, count = MAX_GUESSES;
    bool guessedNumber = true;
    
    srand(time(0));
    
    num = (rand() % 100) + 1; // range 1 - 100
    
    
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    
    // While loop when count = 0 and guessedNumber = false.
    
    while (count != 0 && guessedNumber == true) {
        
        cout << "Range: [" << low << ", " << high << "] Number of guess left: " << count << endl;
        
        cout << "Your guess: ";
        cin >> guess; // read guess
        
        // if guess is correct break the loop
        
        if (guess == num) {
            cout << "Congrats! You guessed my number in " << 5 - count << " guesses." << endl;
            guessedNumber = false;
        }
        
        // if number is bigger
        if ( count <= 4 ) {
            
            if ((guess < num) && (guess >= low) && (guess <= high)) {
                low = guess + 1; // set the lower bound
                cout << "Wrong! My number is bigger." << endl;
            } else if ((guess > num) && (guess >= low) && (guess <= high)){   // if number is smaller
                high = guess - 1; // set the upper bound
                cout << "Wrong! My number is smaller." << endl;
            } else {
                if (guess < num) {
                    cout << "Wrong! My number is bigger." << endl;
                } else {
                    cout << "Wrong! My number is smaller." << endl;
                }
            }
            
        } else {
            
            if (guess < num) {
                low = guess + 1; // setting the lower bound
                cout << "Wrong! My number is bigger." << endl;
            } else if (guess > num){   // if number is smaller
                high = guess - 1; // set the upper bound
                cout << "Wrong! My number is smaller." << endl;
            }
            
        }
        
        count--;
        
    }
    
    
    
    // if all guess count is over then
    if (count == 0) {
        cout << "Sorry, Number of guesses over. Number is " << num << endl;
    }
    
    return 0;
    
}




