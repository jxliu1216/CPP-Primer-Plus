//morechar.cpp --the char type and int type contrast
#include <iostream>
int main(void)
{
	using namespace std;
	
	char ch;
	int i;

	cout << "Please input a char: ";
	cin >> ch;
	i = ch;
	cout << "The ASCII code for " << ch << " is "
		 << i << "." << endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is "
		 << i << "." << endl;

	//using the cout.put() member function to print a character
	cout << "Display a char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!');

	cout << endl << "Done!" << endl;

	return 0;
}
