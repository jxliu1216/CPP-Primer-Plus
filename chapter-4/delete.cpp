/*************************************************************************
    > File Name: delete.cpp
    > Descriptions: using the delete operator 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Fri 31 Aug 2018 04:08:09 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

char* getname(void);      // function prototype

int main(void)
{
	char* name;           // create pointer but no storage 

	name = getname();     // assign address of string to name 
	cout << name << " at " << (int*) name << endl;
	delete name;          // memory freed

	name = getname();     // reuse freed memory
	cout << name << " at " << (int*) name << endl;
	delete name;

	return 0;
}

char* getname(void)
{
	char temp[80];        // temporary storage
	cout << "Enter last name: ";
	cin.getline(temp, 80);
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);     //copy string into small space 

	return pn;
}
