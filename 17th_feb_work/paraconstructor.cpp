//Program code for parameterized constructor

#include <iostream>
using namespace std;

class constructor {			//class defination
	public:
	int  i = 10;
	int j = 10;
	int k = 10;
	constructor() {
		cout << "Inside the constructor\n" << endl;
	j = 0;
	k = 5;


	}	
	constructor(int x, int y, int z) {
		cout << "Inside the para constructor\n" << endl;
		i = x;
		j = y;
		k = z;

	}


};			//end of the class

int main() {
	constructor demo1, demo2(5, 5, 5), demo3(22, 22, 55);
	cout << "Values of demo 1 members: " << demo1.i << " "<< demo1.j << " " << demo1.k << endl;

	cout << "Values of demo 1 members: " << demo2.i << " "<< demo2.j << " " << demo2.k << endl;

cout << "Values of demo 1 members: " << demo3.i << " "<< demo3.j << " " << demo3.k << endl;


return 0;
}


