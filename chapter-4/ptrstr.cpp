/*************************************************************************
    > File Name: ptrstr.cpp
    > Descriptions: using pointer to strings  
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Thu 30 Aug 2018 08:18:54 PM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char animal[20] = "bear";        // animal holds bear
	const char* bird = "wren";       // bird holds address of string 
	char* ps;                        // uninitialized

	cout << animal << " and " << bird << endl;    // display bear & wren
	
	cout << "Enter a kind of animal: ";
	cin >> animal;
	ps = animal;                    // set ps to point to string 
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*) animal << endl;
	cout << ps << " at " << (int*) ps << endl;

	ps = new char[strlen(animal) + 1];    // get new storage
	strcpy(ps, animal);             // copy string to new storage
	cout << animal << " at " << (int*) animal << endl;
	cout << ps << " at " << (int*) ps << endl;

	delete [] ps;
	return 0;
}

