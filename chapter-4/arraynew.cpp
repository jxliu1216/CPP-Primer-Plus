/*************************************************************************
    > File Name: arraynew.cpp
    > Descriptions: using the new operators for the arrays 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 30 Aug 2018 03:54:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
	double* p3 = new double [3];     // space for 3 doubles
	p3[0] = 0.2;                     // treat p3 lile an array name 
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;                    // increase the pointer
	cout << "Now p3[0] is " << p3[0];
	cout << " and p3[1] is " << p3[1] << endl;

	p3 = p3 - 1;                    // point back to the begining
	delete [] p3;                   // free the memory

	return 0;
}

