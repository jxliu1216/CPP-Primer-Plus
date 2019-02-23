/*************************************************************************
    > File Name: num_test.cpp
    > Descriptions: use numeric test in for loop  
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Sat 15 Sep 2018 10:27:50 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
 int main()
{
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i=limit; i; i--)
		cout << "i = " << i << endl;
	cout << "Down now that i = " << i << endl;
	return 0;
}
