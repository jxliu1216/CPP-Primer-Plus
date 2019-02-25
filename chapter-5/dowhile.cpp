/*================================================================
*   Copyright (C) 2019. All rights reserved.
*   
*   Name: dowhile.cpp
*   Author: Jinxue Liu
*   Date: 2019/02/25
*   Description: exit-condition loop
*
================================================================*/

#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in range 1 - 10 to find ";
    cout << "My favourite number\n";
    do
    {
        cin >> n;
    }while(n != 7);
    cout << "Yes, 7 is my favourite number!\n";
    return 0;
}
