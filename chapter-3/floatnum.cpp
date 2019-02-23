//floatnum.cpp --floating-point types

#include <iostream>

int main(void)
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);  //fixed point

	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;

	cout << "tub = " << tub << ", ";
	cout << "a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = " << 10 * million * tub;
	cout << endl;

	cout << "mint = " << mint; 
	cout << " and a million mints = " << million * mint;
	cout  << endl;

	return 0;
}
