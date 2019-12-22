// stock00.cpp -- implementing the stock class
// version 00

#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can not be negative; "
                  << company << " shares set to be 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can not be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares sold can not be negative. "
                  << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cout << "You can not sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
    {
        share_val = price;
        set_tot();
    }

void Stock::show()
{
    using std::cout;
    using std::endl;
    using std::ios_base;
    // set format
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company << " Shares " << shares << endl;
    cout << " Share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << std::endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}