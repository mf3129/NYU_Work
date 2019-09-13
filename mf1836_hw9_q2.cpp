//
//  main.cpp
//  mf1836_hw9_q2.cpp
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int checkAnagram(char *f, char *s);

int main(){
    
    //Getting user input
    
    char f1[100], s1[100];
    cout << "Enter first String:\n";
    cin.getline(f1, 100);
    
    cout << "Enter second String:\n";
    cin.getline(s1, 100);
    
    if(checkAnagram(f1, s1)){
        cout << "The strings are Anagram";
    } else {
        cout << "Thestrings are not Anagram";
    }
    
    return 0;
}
int checkAnagram(char *f, char *s){
    int fc[256] = {0}, sc[256] = {0};
    int i;
    
    if(strlen(f) != strlen(s)){
        return 0;
    }
    
    
    for(i = 0; f[i] != '\0'; i++){
        fc[f[i]]++;
    }
    
    for(i = 0; s[i] != '\0'; i++){
        sc[s[i]]++;
    }
    
    for(i = 0; i < 256; i++){
        if(fc[i] != sc[i])
            return 0;
    }
    
    return 1;
}
