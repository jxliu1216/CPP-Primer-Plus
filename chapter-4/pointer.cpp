//pointer.cpp -- our first pointer varible
#include <iostream>
int main(void)
{
	using namespace std;
	int update = 6;
	int *p_updates;
	p_updates = &update;

	//express values two ways
	cout << "Values: update = " << update;
	cout << ", *p_updates = " << p_updates << endl;

	//express address two ways 
	cout << "Address: &update = " << &update;
	cout << ", p_updates = " << p_updates << endl;

	//use pointer to change value 
	*p_updates = *p_updates + 1;
	cout << "New update = " << update << endl;

	return 0;
}
