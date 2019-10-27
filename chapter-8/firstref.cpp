// firstref.cpp  -- defining and using a reference
#include <iostream>

int main(void)
{
    using namespace std;
    int rates = 101;
    int & rodents = rates;
    cout << "rates = " << rates << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rates = " << rates << ", rodents = " << rodents << endl;
    cout << "rates address = " << &rates
         << ", rodents address = " << &rodents << endl;
    
    return 0;
}