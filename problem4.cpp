//
//  main.cpp
//  problem4
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[10], temp;
    int i, j;
    cout << "Enter a string: ";
    gets(str);
    cout << "First array is: " << str << endl;
    
    j = strlen(str) - 1;
    for (i = 0; i < j; i ++, j --)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\nSecond array (reversed) is: " << str << endl;
    
    
    
    return 0;
}
