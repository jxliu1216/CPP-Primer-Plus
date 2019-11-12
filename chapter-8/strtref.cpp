// strtref.cpp -- using structure reference
#include <iostream>
#include <string>

struct free_throws
{
    std::string name;
    int made;
    int attempt;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    using namespace std;
    // partial initializations, remaining members set to 0
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    // no initialization
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    // use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    // use return value in assignment
    dup = accumulate(team, five);
    cout << "Display team: " << endl;
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);

    // ill-advised assignment
    accumulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);

    return 0;
}

void display(const free_throws & ft)
{
    using namespace std;
    cout << "Name: " << ft.name << endl;
    cout << "Made: " << ft.made << "\t";
    cout << "Attempt: " << ft.attempt << "\t";
    cout << "Percent: " << ft.percent << endl;
}

void set_pc(free_throws & ft)
{
    if (ft.attempt != 0)
        ft.percent = 100.0f * float(ft.made)/float(ft.attempt);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempt += source.attempt;
    target.made += source.made;
    set_pc(target);
    return target;
}