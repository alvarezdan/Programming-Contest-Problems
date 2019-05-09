//
//  main.cpp
//  problem3
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    
    int value = 0;
    int sum = 0;
    
    cout << "Enter any number of digits: " << endl;
    cout << "To stop, enter a letter." <<endl;
    
    
    while(cin >> value){
        sum += value;
    }
    cout << "Sum of numbers entered is: " << sum << endl;
    
    return 0;
}
