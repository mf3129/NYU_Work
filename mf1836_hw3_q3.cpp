//
//  main.cpp
//  mf1836_hw3_q3.cpp
//
//  Created by Makan fofana on 7/30/19.

//Question 3:

//Write a program that does the following:
//• Ask user to input three Real numbers a, b and c. They represent the parameters of a
//quadratic equation 𝑎𝑥# + 𝑏𝑥 + 𝑐 = 0
//• Classify to one of the following:
//- ’Infinite number of solutions’ (for example, 0𝑥# + 0𝑥 + 0 = 0 has infinite number of solutions)
//- ’No solution’ (for example, 0𝑥# + 0𝑥 + 4 = 0 has no solution)
//- ’No real solution’ (for example, 𝑥# + 4 = 0 has no real solutions)
//- ’One real solution’
//- ’Two real solutions’
//• In cases there are 1 or 2 real solutions, also print the solutions.
//


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a,b,c;

    string NumberOfSolution;
    double addingQuadraticSolution, subtractQuadraticSolution;
    double quadraticRoot;

    
    cout << "Please enter value of a: ";
    cin >> a;
    
    cout << "Please enter value of b: ";
    cin >> b;
    
    cout << "Please enter value of c: ";
    cin >> c;
    
    // Quadratic formula
    quadraticRoot = (b*b - 4*a*c);
    addingQuadraticSolution = (-b + sqrt(quadraticRoot)) / (2*a);
    subtractQuadraticSolution = (-b - sqrt(quadraticRoot)) / (2*a);
    
    // Situation for infinite of solutions
    if (a == 0 && b == 0 && c == 0)
        NumberOfSolution = "infinite number of solutions";
    // When there are no solutions
    else if (a == 0 && b == 0 && c != 0)
        NumberOfSolution = "no solution";
    // Case if there are values for a and implicit that b or c is either 0 or have values
    // if a is 0 then there are infinite # of solutions based on the quadratic formula
    else if (a != 0) {
        // Case for two real solutions if b^2 - 4ac > 0
        if (quadraticRoot > 0) {
            NumberOfSolution = "two real solutions";
            cout << "This equation has " << NumberOfSolution << " x=" << subtractQuadraticSolution <<", x="<<addingQuadraticSolution << endl;
            // Case for one real solution if b^2 - 4ac = 0
        } else if (quadraticRoot == 0) {
            NumberOfSolution = "one real solution";
            cout << "This equation has " << NumberOfSolution << " x=" << addingQuadraticSolution<<endl;
            // Case for no real solution if b^2 - 4ac is < 0 because you cannot square root a negative number
            //to get a real number
        } else
            NumberOfSolution = "no real solution";
    } else
        // Case if a == 0 and b or c is either 0 or has a value
        NumberOfSolution = "infinite number of solutions";
    
    
    
    if (NumberOfSolution == "infinite number of solutions" || NumberOfSolution == "no real solution"
        || NumberOfSolution == "no solution")
        
        cout << "This equation has " << NumberOfSolution << endl;
    
    
    return 0;
}
