//ifelseif.cpp -- using if else if statement
#include <iostream>
using namespace std;

const int Fave = 27;

int main(void)
{
    int n;

    cout << "Enter a number in the range 1 to 100 to find: ";
    cout << endl;
    cout << "my favourite number: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else
            cout << Fave << " is right!\n";
        
    } while (Fave != n);
    
    return 0;
}