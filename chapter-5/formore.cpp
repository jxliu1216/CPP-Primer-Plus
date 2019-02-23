/*************************************************************************
    > File Name: formore.cpp
    > Descriptions: more looping with for 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 20 Sep 2018 10:28:30 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

const int Arsize = 16;

int main()
{
	long long factorials[Arsize];
	factorials[1] = factorials[0] = 1LL;
	for(int i=2; i<Arsize; i++)
		factorials[i] = i * factorials[i-1];
	for(int i=0; i<Arsize; i++)
		cout << i << "! = " << factorials[i] << endl;

	return 0;
}

