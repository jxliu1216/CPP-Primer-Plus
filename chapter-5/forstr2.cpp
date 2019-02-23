/*************************************************************************
    > File Name: forstr2.cpp
    > Descriptions: reversing an array 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 27 Sep 2018 10:52:27 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	// physically modify string objects
	char temp;
	int i,j;
	for(j=0, i=word.size()-1; j<i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	cout << "Done!\n";

	return 0;
}
