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
void printYearCalendar(int year, int startingDay);



int main() {
    
   // Part A - printMonthCalendar(31, 4);
    int yearNumber;
    int tabNumber;
    
    cout << "Enter a year: ";
    cin >> yearNumber;
    
    cout << "Enter the number of spaces: ";
    cin >> tabNumber
    ;
    
    printYearCalendar(yearNumber, tabNumber);
    
    return 0;
}


//Defining Functions

                                            /*****************************   Part A   **********************************/

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
    
    cout << endl;
    
    
    return finalDay;
}



                                    /*****************************   Part B   **********************************/

bool isALeapYear(int year) {
        
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
    
}



                                    /*****************************   Part C   **********************************/

void printYearCalendar(int year, int startingDay) {
    
    string month [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int finalDay;
    

    if (isALeapYear(year)) {
        //Accouting for the leap year
        daysInMonth [1] = 29;
        
        //Looping through the array
        for (int i = 0; i < 12; i++) {
            //Print the header for each month
            cout << month[i] << " " << year << endl;
            finalDay = printMonthCalendar(daysInMonth[i], startingDay);
            startingDay = finalDay + 1;
            cout << endl;
        }
    }

    
}
