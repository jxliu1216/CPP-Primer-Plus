//typecast.cpp -- forcing type changes
#include <iostream>
int main(void)
{
	using namespace std;
	int auks, bats, coots;

	//the following statment adds the values as double
	//the converts the result to int
	auks = 19.99 + 11.99;

	//these statment add values as int
	bats = (int) 19.99 + (int) 11.99; //old c syntax
	coots = int (19.99) + int (11.99); //c++ syntax
	cout << "auks = " << auks
		 << ", bats = " << bats
		 << ", coots = " << coots
		 << endl;
	
	char ch = 'Z';
	cout << "The code for " << ch << " is " << int(ch) << endl;
	cout << "Yes, the code is " << static_cast<int>(ch) << endl;

	return 0;
}
