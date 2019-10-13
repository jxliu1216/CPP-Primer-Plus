// strgback.cpp -- a function that returns a pointer to char
#include <iostream>

char * buildstr(char ch, int n);

int main(void)
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;

    char * ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;

    ps = buildstr('+', 20);
    cout << ps << "-Done-" << ps << endl;
    delete [] ps;

    return 0;
}

// build string made of n c character
char * buildstr(char ch, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';
    while(n-- > 0)
        pstr[n] = ch;

    return pstr;
}