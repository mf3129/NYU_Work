//
//  main.cpp
//  mf1836_hw3_q5.cpp
//
//  Created by Makan fofana on 7/31/19.
//
//    Question 5:
//    Write a program that prompts for weight (in pounds) and height (in inches) of a person, and prints the weight status of that person.
//    Your program should interact with the user exactly as it shows in the following example: Please enter weight (in pounds): 135
//    Please enter height (in inches): 71
//    The weight status is: Normal
//    Note: 1 pound is 0.453592 kilograms and 1 inch is 0.0254 meters.

//

#include <iostream>
#include <cmath>

using namespace std;

const double KILOGRAM_CONVERSION = 0.453592;
const double METER_CONVERSION = 0.0254;


double BMI (double weight, double height){
    
    double result = 0;
    
    result = weight/(height * height);
    
    return result;
}


int main() {

    double usersWeightInPounds, userHeightInInches, userWeightInKilograms, userHeightInMeters, result;
    
    
    cout << "Please enter weight (in pounds): " << endl;
    cin >> usersWeightInPounds;
    
    cout << "Please enter height (in inches): " << endl;
    cin >> userHeightInInches;
    
    
    userWeightInKilograms = usersWeightInPounds * KILOGRAM_CONVERSION;
    userHeightInMeters = userHeightInInches * METER_CONVERSION;
    
    result = BMI(userWeightInKilograms, userHeightInMeters);
    
    if (result < 18.5) {
        cout << "The weight status is: Underweight" << endl;
    } else if (result >= 18.5 && result < 25) {
        cout << "The weight status is: Normal" << endl;
    } else if (result >= 25 && result < 30) {
        cout << "The weight status is: Overweight" << endl;
    } else {
        cout << "The weight status is: Obese" << endl;
    }
    

    
    return 0;
}
