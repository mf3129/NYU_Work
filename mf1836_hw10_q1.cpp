//
//  main.cpp
//  mf1836_Q1
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>

using namespace std;


string* createWordsArray(string sentence, int& outWordsArrSize);


int main()
{

    string sentence;
    int outWordsArrSize = 0;
    string* strWords;
    
    //storing user input
    cout << "Enter Sentence :";
    getline(cin, sentence);
    
    strWords = createWordsArray(sentence, outWordsArrSize);
    
    cout << "Displaying the contents of the words array :" << endl;
    for (short i = 0; i < outWordsArrSize; i++)
    {
        cout << strWords[i] << endl;
    }
    
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize)
{
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
            outWordsArrSize++;
    }
    outWordsArrSize++;
    
    // Creating array dynamically
    string* strWords = new string[outWordsArrSize];
    short counter = 0;
    
    for (short i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            counter++;
            i++;
        }
        strWords[counter] += sentence[i];
    }
    return strWords;
}
