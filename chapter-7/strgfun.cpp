// strgfun.cpp -- functions with a string argument
#include <iostream>

unsigned int c_in_str(const char * str, char ch);

int main(void)
{
    using namespace std;
    char mmm[15] = "minium";
    const char * wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return 0;
}

// this function counts the number of ch characters
// in the string str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;    // initialization !!!

    while(*str)
    {
        if(*str == ch)
            ++count;
        ++str;
    }

    return count;
}