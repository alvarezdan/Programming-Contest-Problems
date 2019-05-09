//
//  main.cpp
//  problem10
//
//  Created by Daniel Alvarez on 5/9/19.
//  Copyright © 2019 Daniel Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

void printPattern(int n) {
    
    int curr_star = 0;
    for (int line_no = 1; line_no <= n; )
    {

        if (curr_star < line_no) {
            cout << "* ";
            curr_star++;
            continue;
        }
        
        if (curr_star == line_no) {
            cout << "\n";
            line_no++;
            curr_star = 0;
        }
    }
    cout << endl;
    for(int line_no = 10; line_no >= 1; --line_no)
    {
        for(int j = 1; j <= line_no; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


int main()
{
    printPattern(10);
    return 0;
}
