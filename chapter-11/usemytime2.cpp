// usemytime2.cpp --using the third draft of the Time class
// compile usemytime2.cpp and mytime2.cpp together

#include <iostream>
#include "mytime2.h"

int main(void)
{
    using std::cout;
    using std::endl;

    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.show();
    cout << endl;

    cout << "waxing time = ";
    waxing.show();
    cout << endl;

    cout << "total work time = ";
    total = weeding + waxing;
    total.show();
    cout << endl;

    cout << "weeding time - waxing time = ";
    diff = weeding - waxing;
    diff.show();
    cout << endl;

    cout << "adjusted work time = ";
    adjusted = total * 1.5;
    adjusted.show();
    cout << endl;

    return 0;
}