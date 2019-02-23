/*************************************************************************
    > File Name: newstrct.cpp
    > Descriptions: using new with a struct 
    > Compiler: GCC/ G++ (Version 7.3.0)
    > Author: Jinxue Liu
    > Mail: LiuJinxuepro@163.com 
    > Created Time: Fri 31 Aug 2018 01:26:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	inflatable* ps = new inflatable;     //allocate memory for struct
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter peice: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet\n";
	cout << "Price: $" << ps->price << endl;

	delete ps;
	return 0;
}

