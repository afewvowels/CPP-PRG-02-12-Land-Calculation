//
//  main.cpp
//  PRG-2-12-Land-Calculation
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  One acre of land is equivalent to 43,560 square feet. Write a program that calculates
//  the number of acres in a tract of land with 391,876 square feet.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const int INT_LAND_TRACT = 391876;
    const int INT_ACRE_FEET = 43560;
    
    // Declare variable
    float fltAcres;
    
    // Calculate acres
    fltAcres = static_cast<float>(INT_LAND_TRACT) / static_cast<float>(INT_ACRE_FEET);
    
    // Set precision to one decimal place
    cout << setprecision(1) << fixed << showpoint;
    
    // Output results to console
    cout << "In " << INT_LAND_TRACT << " square feet\n";
    cout << "there are " << fltAcres << " acres\n";
    
    return 0;
}
