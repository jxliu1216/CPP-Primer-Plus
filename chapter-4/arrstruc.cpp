//arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(void)
{
	using namespace std;
	inflatable gusets[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Goldzilla", 2000, 565.99}
	};

	cout << "The gusets " << gusets[0].name << " and " << gusets[1].name;
	cout << "\nhave a combined volume of ";
	cout << gusets[0].volume + gusets[1].volume << " cubic feets.\n";

	return 0;
}
