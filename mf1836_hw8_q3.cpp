//
//  main.cpp
//  mf1836_hw8_q3.cpp
//
//  Created by Makan fofana on 9/17/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>

using namespace std;

//PROTOTYPE
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);





int main() {
    
    int arrSize = 5;
    int userArray[5] = {45,34,39,48,82};
    
    
   // reverseArray(userArray, arrSize);
    
//    removeOdd(userArray, arrSize);
    
    splitParity(userArray, arrSize);

    return 0;
}


//Function Defintions

//A
void reverseArray(int arr[], int arrSize) {
    
    int i, j;
    int newArray[arrSize];
    
    for (i = 0; i <= arrSize; i++) {
        newArray[i-1] = arr[arrSize - i];
    }
    
    
    
    for (j = 0; j < arrSize ; j++) {
        arr[j] = newArray[j];
        cout << arr[j] << "\t";
    }
    
}



//B

void removeOdd(int arr[], int& arrSize) {
    
    int i;
    int newArray[arrSize];
    
    int count = 0;
    
    //Cycle through the array
    for (i = 0; i < arrSize; i++) {
         //If even number is found, set in newArray else set in another array.
        if (arr[i] % 2 == 0 && arr[i] != 0) {
            newArray[i] = arr[i];
//Debugger
//            cout << "Index " << i << " " << newArray[i] << endl;
            count++;
        }
    }
    
    arrSize = count;
    
    arr[arrSize] = newArray[arrSize];

}



//C

void splitParity(int arr[], int arrSize) {
    
    int i, j, m, evenCount, oddCount;
    int oddArray[arrSize];
    int evenArray[arrSize];
    int newArray[arrSize];
    
    
    for (i = 0; i < arrSize; i++) {
        if (arr[i] % 2 != 0 && arr[i] != 0) {
            oddArray[evenCount] = arr[i];
            evenCount++;
        } else if (arr[i] % 2 == 0 && arr[i] != 0) {
            evenArray[oddCount] = arr[i];
            oddCount++;
        }
    }
    
    arrSize = evenCount + oddCount;
    
    //newArray[arrSize] = oddArray[arrSize];
    
   
    
//    for (j = oddCount, m = 0; j < arrSize; j++, m++) {
//
////         cout << oddArray[j] << endl;
//        oddArray[j++] = evenArray[m];
//        cout << "Index " << j << " " << oddArray[j] << endl;
//
//    }
//    
//    for (j = 0; j < arrSize; j++) {
//  
//        cout << oddArray[j] << endl;
//        
//    }
    
//    cout << oddCount << endl;
//    cout << evenCount << endl;
}

