//address.cpp -- using the & operator to find address
#include <iostream>
int main(void)
{
	using namespace std;
	int donute = 6;
	double cups = 4.5;

	cout << "donute value = " << donute;
	cout << " and donute address = " << &donute << endl;

	cout << "cups value = " << cups;
	cout << "and cups address = " << &cups << endl;

	return 0;
}
