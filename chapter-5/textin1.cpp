/*================================================================
*   Copyright (C) 2019. All rights reserved.
*   
*   Name: textin1.cpp
*   Author: Jinxue Liu
*   Date: 2019/02/27
*   Description: reading chars with a while loop
*
================================================================*/
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter character; enter # to quit: \n";
    cin >> ch;
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " characters read\n";
    return 0;
}
