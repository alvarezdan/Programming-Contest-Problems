//
//  main.cpp
//  problem8
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//
//This program finds the largest number out of up to 10 numbers entered.

#include <iostream>
using namespace std;

int main()
{
    int x=0;
    int y=0;
    int num;
    
    cout << "Enter up to 10 numbers (Enter a character to complete entry): " << endl;
    cin >> num;
    
    for(int i=0; i<100;i++)
    {
        cin >> x;
        if(x>y)
            y=x;
    }
    cout << "Largest number is: " << y << endl;
    return 0;
}
