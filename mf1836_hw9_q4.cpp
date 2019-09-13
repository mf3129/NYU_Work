//
//  main.cpp
//  mf1836_hw9_q4.cpp
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include<iostream>

#include<cstdlib>

using namespace std;

void oddsKeepEvensFlip(int *arr, int arrSize){
    
    int *temp = (int *)malloc(arrSize * sizeof(int));
    
    int i = 0;
    int index = 0;
    
    for( i = 0 ; i < arrSize ; i++ ) {
        if( arr[i] % 2 != 0 ){
            temp[index++] = arr[i];
        }
    }
    
    // add the even elements in reverse order
    
    for( i = arrSize ; i >= 0 ; i-- ) {
        if( arr[i] % 2 == 0 ){
            temp[index++] = arr[i];
        }
    }
    
    for( i = 0 ; i < arrSize ; i++ ) {
        arr[i] = temp[i];
    }
}


int main(){
    
    int arr[] = { 5 , 2 , 11 , 7 , 6 , 4 };
    oddsKeepEvensFlip(arr, 6);
    int i;
    
    cout<<"Calling oddsKeepEvensFlip() : ";
    
    for( i = 0 ; i < 6 ; i++ ) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
