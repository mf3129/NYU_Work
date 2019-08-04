//
//  main.cpp
//  mf1836_hw4_q4.cpp
//
//  Created by Makan fofana on 8/4/19.
//  Copyright © 2019 Makan fofana. All rights reserved.

//  Question 4

//Write two versions of a program that reads a sequence of positive integers from the user,
//calculates their geometric mean, and
//



#include <iostream>
#include <cmath>

using namespace std;

int main() {

/********************************************     Part A     *************************************/
 /*
    //Declaring Variables

    int numOfItems, currentValue;
    double lengthOfSequence, geoMean, sumOfItems;

    //Gathering user input
    cout << "Please enter the length of the sequence: " << endl;
    cin >> lengthOfSequence;

    cout << "Please enter your sequence: " << endl;

    //Initalizing Variables
    sumOfItems = 1;
    geoMean = 0;
    numOfItems = 1;
    

//    Gathering the sum and the total number of items. If -1 is pressed
    while(numOfItems <= lengthOfSequence) {

        cin >> currentValue;
  
        sumOfItems *= currentValue;
  
        // 1/nth power to calculate geometric mean
        geoMean = pow(sumOfItems, 1/lengthOfSequence);
  
        //Increment the number of items
        numOfItems++;

    }

    cout << "The goemetric mean is: " << geoMean << endl;

    
    
*/
    
    
    
/********************************************     Part B     *************************************/
    
    
    
    

    //Declaring Variables
    bool seenEndOfInput;
    int  currentValue;
    double geoMean, sumOfItems, numOfItems;


    //Gathering user input
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " << endl;


    //Initalizing Variables
    sumOfItems = 1;
    geoMean = 0;
    numOfItems = 1;
    seenEndOfInput = false;


    //Checking for each input and calculating the geoMean
     while(seenEndOfInput == false) {

        cin >> currentValue;

        if(currentValue == -1) {

            seenEndOfInput = true;

        } else {

            sumOfItems *= currentValue;

            // 1/nth power to calculate geometric mean
            geoMean = pow(sumOfItems, 1/numOfItems);

            //Increment the number of items
            numOfItems++;
        }

     }

    //Printing the statement
    cout << "The goemetric mean is: " << geoMean << endl;
    
    return 0;
}
