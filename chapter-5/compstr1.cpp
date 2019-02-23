/*************************************************************************
    > File Name: compstr1.cpp
    > Descriptions: comparing strings using arrays
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Sat 03 Nov 2018 09:13:32 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] =  ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}
