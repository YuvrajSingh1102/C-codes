//Program code for constructor

#include <iostream>
using namespace std;

class constructor {			//class defination
	public:
	int  i = 10;
	int j;
	int k;
	public:
	void setval() {
		i  =100;
		cout << "Inside the setvalue() i = " << i << endl;
	}
	constructor() {		//fucntion of constructor in class
		cout << "Inside the constructor\n" << endl;
		j = 0;
		k = 5;

	}


};			//end of the class

int main() {
	//object declaration
	constructor demo1, demo2;
	cout << "Values of demo 1 members: " << demo1.i << " "<< demo1.j << " " << demo1.k << endl;
	demo1.setval();
	cout << "Values of demo 1 members: " << demo2.i << " "<< demo2.j << " " << demo2.k << endl;
	demo2.setval();



return 0;
}


