//2-1.cpp -- display the name and address you input
#include <iostream>

using namespace std;

int main(void)
{
	string name;
	string addr;

	cout << "Please input your name: ";
	getline(cin, name);
	cout << "Please input your address: ";
	getline(cin, addr);

	cout << "Your name is: " << name << endl;
	cout << "Your address is: " << addr << endl;

	return 0;
}
