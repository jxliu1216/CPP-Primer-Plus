// atrctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

// structure declaration
struct polar
{
    double distacne;    // distance from origin
    double angle;       // direction from origin
};
struct rect
{
    double x;           // horizontal distance from origin
    double y;           // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
    using namespace std;

    rect rplace;
    polar pplace;

    cout << "Enter the x and y value: ";
    while(cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done!\n";

    return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distacne = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}

// show polar coordinates, convertin angel to degree
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distacne;
    cout << ", angel = " << dapos.angle * Rad_to_deg << " degrees." << endl;
}