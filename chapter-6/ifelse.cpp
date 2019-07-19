// ifelse.cpp -- using the if else statement
#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            cout << ch;
        else
            cout << ch+1;
        
        cin.get(ch);
    }

    cout << "\nPlease excuse the slight confusion.\n";

    ch = 'l';
    cout << int(ch) << endl;

    return 0;

}