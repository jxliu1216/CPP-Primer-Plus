/*************************************************************************
    > File Name: addpntrs.cpp
    > Descriptions: pointer addition 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 30 Aug 2018 05:47:49 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	// Here are two ways to get the address of an array
	double* pw = wages;             // name of an array = address 
	short* ps = &stacks[0];         // or use address operator with array elements

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "Add one to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << endl;

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "Add one to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << endl;

	cout << "Access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		 << ", stacks[1] = " << stacks[1] << endl;
	cout << "Access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		 << ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";

	return 0;
}

