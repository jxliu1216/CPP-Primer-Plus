/*================================================================
*   Copyright (C) 2019. All rights reserved.
*   
*   Name: textin3.cpp
*   Author: Jinxue Liu
*   Date: 2019/02/27
*   Description: reading chars to end of file  
*
================================================================*/

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}
