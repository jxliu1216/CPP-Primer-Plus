/*************************************************************************
    > File Name: mixtypes.cpp
    > Descriptions: some type combinations 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Tue 04 Sep 2018 11:40:34 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct antarctica_years_end
{
	int year;
}

int main(void)
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3] = {&s01, &s02, &s03};
}
