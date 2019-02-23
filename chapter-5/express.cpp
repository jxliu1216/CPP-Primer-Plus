/*************************************************************************
    > File Name: express.cpp
    > Descriptions: values of expressions 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Sat 15 Sep 2018 10:52:05 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "The expressions x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expressions x < 3 has value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);    // a new c++ feature
	cout << "The expression x < 3 has value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has value ";
	cout << (x > 3) << endl;

	return 0;
}
