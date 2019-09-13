//
//  main.cpp
//  mf1836_hw10_q3.cpp
//
//  Created by Makan fofana on 9/10/19.
//  Copyright © 2019 Makan fofana. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

string* main1(int& outLinesArrSize);
vector<string> main2();


int main () {
    
    
    string* linesArr;
    int linesArrSize;
    vector<string> linesVector;
    

    linesVector = main2();
    
    string searchNum;
    
    /*
     // Prints user
     cout<<"Please enter a number you want to search.\n";
     cin>>searchNum;
     
     cout<<"Version A:\n"
     <<searchNum<<" shows in lines ";
     
     for (int i = 0; i < linesArrSize; i++) {
     if (linesArr[i] == searchNum)
     // print line number if element contains the searchNum
     cout<<i + 1<<", ";
     else
     cout<<"..";
     }
     
     cout<<endl;
     */
    
    cout<<"Please enter a number you want to search.\n";
    cin>>searchNum;
    
    cout<<"Version B:\n"
    <<searchNum<<" shows in lines ";
    
    for (int i = 0; i < linesVector.size(); i++) {
        if (linesVector[i] == searchNum)
            cout<<i + 1<<" ";
        else
            cout<<"..";
    }
    
    cout<<endl;
    
    return 0;
}

string* main1(int& outLinesArrSize) {
    string* lines;
    int linesSize = 0;
    bool seenEndOfSequence = false;
    string currLine;
    
    lines = new string[linesSize];
    
    cout<<"Version A:\n";
    cout<<"Please enter a sequence of positive integers, each in a separate line.\n"
    <<"End you input by typing -1.\n";
    
    while (seenEndOfSequence == false) {
        getline(cin, currLine);
        if (currLine == "-1")
            seenEndOfSequence = true;
        else {
            lines[linesSize] = currLine;
            linesSize++;
            // new dynamic array created
            string* newLines;
            newLines = new string[linesSize];
            // Make a copy of the array
            for (int i = 0; i < linesSize; i++) {
                newLines[i] = lines[i];
            }
            delete [] lines;
            lines = newLines;
        }
    }
    
    outLinesArrSize = linesSize;
    
    return lines;
}

vector<string> main2() {
    
    vector<string> lines;
    bool seenEndOfSequence = false;
    string currentLine;
    
    cout<<"Version B:\n";
    cout<<"Please enter a sequence of positive integers, each in a separate line.\n"
    <<"End you input by typing -1.\n";
    
    while (seenEndOfSequence == false) {
        getline(cin, currentLine);
        if (currentLine == "-1")
            seenEndOfSequence = true;
        else
            lines.push_back(currentLine);
    }
    
    return lines;
}
