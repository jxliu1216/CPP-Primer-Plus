/*================================================================
*   Copyright (C) 2019. All rights reserved.
*   
*   Name: textin2.cpp
*   Author: Jinxue Liu
*   Date: 2019/02/27
*   Description: using cin.get(ch)
*
================================================================*/

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit: \n";
    cin.get(ch);
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
