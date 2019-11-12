// sceref.cpp -- defining and using a reference
#include <iostream>

int main(void)
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats
         << " rodents address = " << &rodents << endl;

    int business = 50;
    rodents = business;
    cout << "business = " << business
         << ", rats = " << rats
         << ", rodents = " << rodents << endl;
    cout << "business address = " << &business
         << ", rats address = " << &rats
         << ", rodents address = " << &rodents << endl;

    return 0;
}