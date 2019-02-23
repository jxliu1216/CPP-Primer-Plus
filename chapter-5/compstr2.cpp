/*************************************************************************
    > File Name: compstr2.cpp
    > Descriptions: comparing string using arrays 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Sat 03 Nov 2018 09:21:21 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string word = "?ate";
	for(char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}
