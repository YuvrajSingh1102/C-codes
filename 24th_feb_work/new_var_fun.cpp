//Program to see the pointer size using new keyword.

#include <iostream>

using namespace std;

int main() {
	float *pt = new float;
	*pt = 55;
	cout << "Value=" << *pt;
	cout << "\nAddress=" << pt;
	cout << "\nsize=" << sizeof(*pt);
	cout << "\nsize ptr=" << sizeof(pt);
	cout << "\nAddress of pt=" << &pt << endl;


return 0;
}
