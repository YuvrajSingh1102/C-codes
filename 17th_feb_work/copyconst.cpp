/*Program to perform the operation of copy constructor*/

#include <iostream>

using namespace std;

class demo{			//class defination
	int m, n;
	public:

	demo(int x, int y) {		//parameterized constructor 
		m = x;
		n = y;
		cout << "Parameterized Constructor" << endl;
	}
	
	demo(demo &x) {			//copy constructor
		m = x.m;
		n = x.n;
		cout << "Copy constructor" << endl;
	}
};			//end of the class

int main() {
	//object declaration.
	demo obj1(5, 6);
	demo obj2(obj1);
	demo obj3 = obj1;
return 0;
}
