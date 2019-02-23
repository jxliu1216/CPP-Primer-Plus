//use_new.cpp -- using the new operator
#include <iostream>
int main(void)
{
	using namespace std;
	int night = 1001;
	int* pt = new int;             // allocate a spce for an int
	*pt = 1001;                    // store a value there

	cout << "night value = " << night <<": location " << &night << endl;
	cout << "int value = " << *pt << ": location " << pt << endl;

	double* pd = new double;      // allocate a space for an double 
	*pd = 10000001.0;             // store a value there

	cout << "double value = " << *pd << ": location " << pd << endl;

	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pointer pt: " << sizeof(pt);
	cout << ", size of *pt: " << sizeof(*pt) << endl;
	cout << "size of pointer pd: " << sizeof(pd);
	cout << ", size of *pd: " << sizeof(*pd) << endl;
	
	delete pd;    //free memory
	delete pt;

	return 0;
}
