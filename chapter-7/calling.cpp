// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>
using namespace std;

void simple();      // function prototype

int main()
{
    cout << "main() will call the simple() function: \n";
    simple();       // function call
    cout << "main() is finished with the simple function.\n";

    return 0;
}

void simple()
{
    cout << "I am but a simple function.\n";
}