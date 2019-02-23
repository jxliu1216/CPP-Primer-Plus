/*************************************************************************
    > File Name: equal.cpp
    > Descriptions: equality vs assignment 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 27 Sep 2018 11:04:21 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
	int quizscores[10] = {20, 20, 20, 30, 59, 20, 5, 5, 8, 20};

	cout << "Doing it right:\n";
	int i;
	for(i=0; quizscores[i]==20; i++)
		cout << "quiz " << i << " is 20!\n";
	cout << endl;
	// cout << "Doing it wrong:\n";
	// for(i=0; quizscores[i]=20; i++)
	//	cout << "quiz " << i << " is 20!\n";

	return 0;
}
