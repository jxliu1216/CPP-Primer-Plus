/*************************************************************************
    > File Name: choices.cpp
    > Descriptions: array variations 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Sat 15 Sep 2018 09:28:04 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	// C. original C++
	double a1[4] = {1.2, 2.4, 3.6, 4.8};
	// C++ 98 STL
	vector<double> a2(4);
	// no simple way to initialilze in C98
	a2[0] = 1.0/3.0;
	a2[1] = 1.0/5.0;
	a2[2] = 1.0/7.0;
	a2[3] = 1.0/9.0;
	// C++11 -- create and initialize array 
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4 = a3;
	// use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	// misdeed
	a1[-2] = 20.2;
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	return 0;
}
