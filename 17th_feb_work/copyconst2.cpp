/*Program to perform all the constrcutor*/

#include <iostream>

using namespace std;

class rectangle{		//class defination
	public:
	int length, width;

	rectangle() { 		// Default constructor
		length = 0;
		width = 0;
	}
	rectangle (int x, int y) { 		// Parameterized constructor
		length = x;
		width = y;
	}
	rectangle(rectangle &_r) { 		// Copy constructor 
		length = _r.length;
		width = _r.width;
	}
};			//end of the class

int main() {
	rectangle r1;  		// Invokes default constructor
	rectangle r2(10, 20); 		// Invokes parameterized constructor
	rectangle r3(r2); 		// Invokes copy constructor 
return 0;
}
