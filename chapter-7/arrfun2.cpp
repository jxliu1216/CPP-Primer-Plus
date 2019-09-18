// arrfun2.cpp --function with an array argument
#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main(void)
{
    using namespace std;

    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << cookies << " = array address, "
         << sizeof cookies << " = size of array\n";
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);
    cout << "Last fout eaters ate " << sum << " cookies.\n";

    return 0;
}

int sum_arr(int arr[], int n)
{
    using namespace std;

    int total = 0;
    cout << arr << " = arr, "
         << sizeof arr << " = size of arr.\n";
    for(int i = 0; i < n; ++i)
        total = total + arr[i];
    
    return total;
}