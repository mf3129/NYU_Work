/*
 
 Implement a function:
 int printMonthCalender(int numOfDays, int startingDay)
 This function is given two parameters:
 numOfDays - The number of days in the month
 startingDay – a number 1-7 that represents the day in the week of the first day
 in that month (1 for Monday, 2 for Tuesday, 3 for Wednesday, etc.).
 
 
 
 */

#include <iostream>

using namespace std;



//Declaring Function Prototype
int printMonthCalendar(int numOfDays, int startingDay);
bool isALeapYear(int year);



int main() {
    
   // Part A - printMonthCalendar(31, 4);
    
   // Part B
    isALeapYear(1896);
    
    return 0;
}


//Defining Functions

int printMonthCalendar(int numOfDays, int startingDay) {
    
    //Printing the header
    cout << "Mon" << '\t' << "Tue" << '\t' << "Wed" << '\t' << "Thr" << '\t' << "Fri" << '\t' << "Sat" << '\t' << "Sun" << endl;
    
        int currentDay = 0, finalDay, positionNumber = 1;
    
        for (positionNumber; positionNumber < numOfDays + startingDay; positionNumber++) {
            
            if (positionNumber < startingDay) {
                cout << "\t";
            }
            
            if (positionNumber >= startingDay && currentDay <= numOfDays) {
                
                currentDay++;
                cout << currentDay << "\t";
                
                if (positionNumber % 7 == 0) {
                    cout << endl;
                }
                
            }
        
        }
    
    finalDay = (positionNumber - 1) % 7;
    
    cout << "\nThe day number in the week of the last day in the month is: " << finalDay << endl;
    
    return finalDay;
}



//////////////Part B

bool isALeapYear(int year) {
        
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
    
}



///// PART C

