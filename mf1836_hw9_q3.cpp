//
//  main.cpp
//  mf1836_hw9_q3.cpp
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include<iostream>

using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
    
    outPosArrSize=0;
    
    
    for(int i=0;i<arrSize;i++) {
        if(arr[i]>0)
            outPosArrSize++;
    }
    
    
    int* outArr=new int[outPosArrSize];
    
    int j=0;
    
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            outArr[j]=arr[i];
            j++;
        }
    }
    
    return outArr;
}

void getPosNums2(int* arr, int arrSize,int*& outPosArr, int& outPosArrSize) {
    
    outPosArrSize=0;
    
    for(int i=0;i<arrSize;i++) {
        if(arr[i]>0) {
            outPosArrSize++;
        }
    }
    
    
    outPosArr=new int[outPosArrSize];
    
    int j=0;
    
    for(int i=0;i<arrSize;i++) {
        if(arr[i]>0){
            outPosArr[j]=arr[i];
            j++;
        }
    }
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr){
    
    (*outPosArrSizePtr)=0;
    
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            
            (*outPosArrSizePtr)++;
        }
    }
    
    int* outArr=new int[(*outPosArrSizePtr)];
    
    int j=0;
    
    
    for(int i=0;i<arrSize;i++){
        
        if(arr[i]>0){
            outArr[j]=arr[i];
            j++;
        }
    }
    
    return outArr;
    
}


void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr) {
    
    *outPosArrSizePtr=0;
    
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0) {
            (*outPosArrSizePtr)++;
        }
    }
    
    
    (*outPosArrPtr)=new int[(*outPosArrSizePtr)];
    
    int j=0;
    
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            (*outPosArrPtr)[j]=arr[i];
            j++;
        }
    }
    
}


void display(int* arr,int size) {
    
    cout<<"\nOutput Array : ";
    
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<endl;
}

int main(){
    
    int outPosArrSize;
    int arrSize=6;
    int* outPosArr;
    
    int arr[]={3, -1, -3, 0, 6, 4};
    
    
    cout<<"Function 1 :";
    
    outPosArr=getPosNums1(arr, arrSize,outPosArrSize);
    
    display(outPosArr,outPosArrSize);
    
    
    cout<<"Function 2 :";
    
    getPosNums2(arr, arrSize,outPosArr, outPosArrSize);
    
    display(outPosArr,outPosArrSize);
    
    
    cout<<"Function 3 :";
    
    outPosArr=getPosNums3(arr, arrSize,&outPosArrSize) ;
    
    display(outPosArr,outPosArrSize);
    
    
    cout<<"Function 4 :";
    
    getPosNums4(arr, arrSize,&outPosArr, &outPosArrSize);
    
    display(outPosArr,outPosArrSize);
    
    return 0;
    
}
