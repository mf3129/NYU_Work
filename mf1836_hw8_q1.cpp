//
//  main.cpp
//  Hwk#8
//
//  Created by Makan fofana on 9/17/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>


using namespace std;

//Function Prototype

int minInArray(int arr[], int arrSize);


int main() {
    
    int temp = 0;
    int i, j, m, count;
    int arrSize = 10;
    int minValue;
    
//    cout << "Enter the number of elements: " << endl;
//    cin >> arrSize;
//
    
    cout << "Please enter 20 integers sepearated by a space: " << endl;

    
    int arr[arrSize];
    int minValueArray[10];
    
    cout << "Enter the Elements: " << endl;
    //Assigning values to an Array
    for (j = 0; j < arrSize; j++) {
        cin >> arr[j];
    }
    
    //For Loop for the i
    for (i = 0; i <arrSize; i++){
        if (i == 0) {
            temp = arr[i];
        } else {
            if (arr[i] < temp) {
                temp = arr[i];
            }
        }
    }
    
    //Loop again to find indexes
    for (m = 0, count = 0; m < arrSize; m++){
        if (arr[m] == temp) {
            minValueArray[count] = m;
            count++;
        }
    }
    
    minValue = minInArray(arr, arrSize);
    
    cout << "The minimum value is " << minValue << ", and it is located in the following indices: ";
    
    for (int z = 0; z < count; z++) {
       cout << minValueArray[z] << "\t";
    }

    
    return 0;
}



int minInArray(int arr[], int arrSize) {
    
    int minValue = arr[0];
    
    for (int i = 0; i < arrSize; i++) {
        if (minValue > arr[i]) {
            minValue = arr[i];
        }
    }
    
    return minValue;
}

