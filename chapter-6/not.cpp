// not.cpp -- using the not operator
#include <iostream>
#include <climits>

using namespace std;

bool is_int(double);

int main()
{
    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }

    int val = int(num);
    cout << "You have entered the integer: " << val << "\nbye!\n";

    return 0;
}

bool is_int(double x)
{
    if (x >= INT_MIN && x <= INT_MAX)
        return true;
    else
        return false;
}