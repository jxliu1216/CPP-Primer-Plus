//arrayone.cpp -- small arrays of integers
#include <iostream>
int main(void)
{
	using namespace std;
	int yams[3];   //create a array with three elements
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5};   //create and initialize a array
	
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[0] << " yams costs"
		 << yamcosts[0] << " cents per yam." << endl;
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents." << endl;

	cout << endl;

	cout << "Size of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";

	return 0;
}
