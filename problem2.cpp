//
//  main.cpp
//  problem2
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float sumNum;
    
    cout << "Enter 10 numbers from 1 to 100: "<< endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
    
    cout << "You have entered: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", " << n5 << ", " << n6 << ", " << n7  << ", " << n8 << ", " << n9 << ", " << n10 << endl;
    
    sumNum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    
    cout << "The sum of the numbers is: " << sumNum << "." << endl;
    return 0;
}
