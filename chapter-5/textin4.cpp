/*================================================================
*
*   Name: textin4.cpp
*   Author: Jinxue Liu
*   Date: 2019/03/08
*   Description: reading chars with cin.get() 
*
================================================================*/


#include <iostream>
using namespace std;

int main(void)
{
    int ch;
    int count = 0;

    while((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}
