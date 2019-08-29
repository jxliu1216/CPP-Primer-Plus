#include <iostream>

void n_chars(char, int);

int main()
{
    using namespace std;

    int times;
    char ch;

    cout << "Enter a characters: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another characters or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of time is " << times << ".\n";
    cout << "Bye\n";

    return 0;
}

void n_chars(char c, int n)
{
    using namespace std;
    
    while(n-- > 0)
        cout << c;
}