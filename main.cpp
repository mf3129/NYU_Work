//Write your; code here.
//Make sure to upload your file.


#include <iostream>
using namespace std;

int main() {
    
    //Practice 1
    
    int tableSize;
    int count, firstRowValue;
    
    cout << "Enter a number to use: " << endl;
    cin >> tableSize;
    
    firstRowValue = 1;
    
    //Iterate and create the rows
    for (int row = 1; row <= tableSize; row++ ){
        //Create Columns
        for (int column = 1; column <= tableSize; column++) {
            //Multiply each number in column by the firstRowValue
            cout << firstRowValue * column;
            if ((firstRowValue * column) >= 10) {
                cout << "  ";
            } else {
                cout << "   ";
            }
        }
    
        cout << endl;
        //Increment firstRowValue
        firstRowValue++;
    
    
    }
    
    
        return 0;
    }
    


