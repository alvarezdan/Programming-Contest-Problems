//
//  main.cpp
//  problem6
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//
//This program will receive user input and calculate the gross pay based on salary and hours worked, taking into account overtime paid at time and a half.

#include <iostream>
using namespace std;

const int STD_HRS = 40;
const float OVERTIME = 1.5;

int main() {
    
    float hours;
    float rate;
    float regular;
    float overtime;
    float pay;
    
    cout << "Enter total number of hours worked this week: ";
    cin >> hours;
    cout <<"Enter your hourly pay rate: ";
    cin >> rate;
    cout << "You worked " << hours << " hours this week and your hourly pay is $" << rate << "." << endl;
    
    if(hours <= STD_HRS) {
        regular = hours * rate;
        overtime = 0.0;
    }
    else {
        regular = STD_HRS * rate;
        overtime = (hours - STD_HRS) * rate * OVERTIME;
    }
    pay = regular + overtime;
    cout << "Your pay this period is: $" << pay << endl;
    return 0;
}
