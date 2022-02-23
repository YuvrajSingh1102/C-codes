/*Program demonstrate the unary operator overloading*/

#include <iostream>

using namespace std;

class complex{			//class defination
	int real, img;
	
	public:
	complex() {
		real = 0;
		img = 0;
		//cout << "Real: " << real << " Image: " << img << endl;
	
	}
	
	complex(int a, int b) {
		real = a;
		img = b;
		//cout << "Real: " << real << " Image: " << img << endl;
	}
	
	void display() {
	
		cout << "Real: " << real << " Image: " << img << endl;
	}
	complex operator --();
	void operator ++();
	//complex operator--();
	void operator --();
};			//end of the class

void complex::operator --() {
	
	real = --real;
	img = --img;	
}

void complex::operator --(int) {
	
	real = real--;
	img = img--;	
}

void complex::operator ++() {
	
	real = ++real;
	img = ++img;	
}

//complex complex::operator --() {
//	complex temp;
//	temp.real = --real;
//	temp.img = --img;
//	return temp;	
//}

int main() {
	complex c1(2,5), c2(2,5), c3;
	c1.display();
	
	cout << "Unary operator output" << endl;
	--c1;
	c1.display();
	
	//complex c2;
	//c2 = (-c1);
	//c2.display();

	//++c2;
	//c2.display();
	
	
	
	//c2 = --c3;
	//c2.display();
	
	c1--;
	c1.display();


return 0;
}
