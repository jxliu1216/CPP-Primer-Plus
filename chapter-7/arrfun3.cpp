//arrfun3.cpp -- array function and const
#include <iostream>
const int Max = 5;

// function prototypes
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);    // do not change data
void revalue(double r, double arr[], int n);

int main(void)
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "Enter revalue factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

int fill_array(double arr[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for(i = 0; i < limit; ++i)
    {
        cout << "Enter value #" << i + 1 << ":";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if(temp < 0)
            break;
        arr[i] = temp;
    }

    return i;
}

void show_array(const double arr[], int n)
{
    using namespace std;
    for(int i = 0; i < n; ++i)
    {
        cout << "Property #" << i + 1 << ": $" << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for(int i = 0; i < n; ++i)
        arr[i] *= r;
}