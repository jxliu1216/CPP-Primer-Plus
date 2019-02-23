/*************************************************************************
    > File Name: block.cpp
    > Descriptions: use a block statement 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Wed 26 Sep 2018 11:03:28 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	cout << "The Amazing Account will sum and average ";
	cout << "five numbers for you\n";
	cout << "Please input five values: \n";
	double number;
	double sum = 0.0;
	for(int i=1; i<=5; i++)
	{
		cout << "Value" << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum/5 << endl;
	cout << "The Amazing Account bids you adieu!\n";

	return 0;
}
