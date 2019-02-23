/*************************************************************************
    > File Name: forstr1.cpp
    > Descriptions: using for with a string 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Tue 25 Sep 2018 10:47:25 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	// display letters in reverser order
	for (int i=word.size()-1; i>=0; i--)
		cout << word[i];
	cout << "\nDone!\n";

	return 0;
}

