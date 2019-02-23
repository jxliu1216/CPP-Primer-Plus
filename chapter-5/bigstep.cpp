/*************************************************************************
    > File Name: bigstep.cpp
    > Descriptions: count as directed 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Tue 25 Sep 2018 10:37:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
	cout << "Enter a integer: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\n";
	for(int i=0; i<100; i=i+by)
		cout << i << endl;
	return 0;
}

