// lotto.cpp -- probablity of winning
#include <iostream>

long double probability(unsigned int numbers, unsigned int picks);

int main()
{
    using namespace std;

    double total, choices;
    
    cout << "Enter the total number of choices on the game card and\n"
         << "the number of picks allowed:\n";

    while((cin >> total >> choices) && choices <= total)
    {
        cout << "You have on chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers ( q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from number choices
long double probability(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    long double n;
    unsigned int p;

    for(n = numbers, p = picks; p > 0; --n, --p)
        result = result * n / p;

    return result;
}