//
//  main.cpp
//  problem5
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//
//This program reads in a sentence and returns the sentence reversed. 

#include <iostream>
using namespace std;

void reverse(const string& a);

int main() {
    string str;
    cout << "Enter a sentence: " << endl;
    getline(cin, str);
    cout << "You have entered: " << str << endl;
    cout << "Your input reversed is: ";
    reverse(str);
    return 0;
}
void reverse(const string& str) {
    size_t numOfChars = str.size();
    if (numOfChars == 1)
        cout << str << endl;
    else {
        cout << str[numOfChars -1];
        reverse(str.substr(0, numOfChars - 1));
    }
}
