/*================================================================
*   Copyright (C) 2019. All rights reserved.
*   
*   Name: waiting.cpp
*   Author: Jinxue Liu
*   Date: 2019/02/25
*   Description: using clock() in a time-delay loop
*
================================================================*/

#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;   // conver to clock ticks
    cout << "Starting...\n";
    clock_t start = clock();
    while(clock() - start < delay)
        ;
    cout << "Done!" << endl;
    return 0;
}
