//
//  main.cpp
//  CIS Programming Competition
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//
//
// This program reads 3 integers, determines and prints the largest one.

#include <iostream>
using namespace std;

int main()
    {
        float num1, num2, num3;
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
        
        cout << "You have entered: " << num1 << ", " << num2 << ", " << num3 << "."<<endl;

        if(num1 >= num2 && num1 >=num3)
        {
            cout << "The largest number is: " << num1<<endl;
        }
        
        if(num2 >= num1 && num2 >=num3)
        {
            cout << "The largest number is: " << num2<<endl;
        }
        if(num3 >= num1 && num3 >=num1)
        {
            cout << "The largest number is: " << num3 << "."<<endl;
        }
        return 0;
    }
