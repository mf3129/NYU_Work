//
//  main.cpp
//  mf1836_hw10_q2.cpp
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>

using namespace std;

//Defning pointer function
int *findMissing(int arr[], int n, int &resArrSize) {
    
    int *p = new int[n];
    for (int i = 0; i<n; i++){
        p[i] = i;
    }
    
    int count = n;
    for (int i = 0; i<n; i++){
        if (arr[i] < n){
            if (p[arr[i]] != -1){
                p[arr[i]] = -1;
                count--;
            }
        }
    }
    
    int *d = new int[count];

    int j = 0;
    for (int i = 0; i<n; i++){
        if (p[i] != -1){
            d[j] = p[i];
            j++;
        }
    }
    
    resArrSize = count;
    return d;
}



int main() {
    
    int value;
    int* ptr;
    int arr[] = { 3,1,3,0,6,4};

    
    ptr = findMissing(arr,6,value);
    //cout << c << endl;
    
    for (int i=0; i<value; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
