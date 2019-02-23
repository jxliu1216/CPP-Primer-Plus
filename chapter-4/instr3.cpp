//instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main(void)
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: " << endl;
	cin.get(name, ArSize).get();
	cout << "Your favourite dessert:\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert
		 << " for you, " << name << endl;

	return 0;
}
