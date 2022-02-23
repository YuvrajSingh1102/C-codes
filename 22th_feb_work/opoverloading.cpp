// Code for operator overloading : + - / %

#include <iostream>

using namespace std;

class Complex {
	int real, img;
	
	public:
	//deafault constructor
	Complex() {
	real = 0;
	img = 0;
	}
	//parametrized constructor 
	Complex(int x, int y) {
		real = x;
		img = y;
	}
	// display function
	void display() {
	
	cout << "The real part: " << real << " and img part: " << img << endl << endl;
	}
	
	// Overload the '+' operator
	Complex operator + (Complex ob) {
	Complex temp;
	temp.real = real + ob.real;
	temp.img = img + ob.img;
	return temp;
	}
	
	// Overload the '-' operator
	Complex operator - (Complex ob) {
	Complex temp;
	temp.real = real - ob.real;
	temp.img = img - ob.img;
	return temp;
	}
	
	// Overload the '*' operator
	Complex operator * (Complex ob) {
	Complex temp;
	temp.real = real * ob.real;
	temp.img = img * ob.img;
	return temp;
	}
	
	// Overload the '/' operator
	Complex operator / (Complex ob) {
	Complex temp;
	temp.real = real / ob.real;
	temp.img = img / ob.img;
	return temp;
	}
	
	// Overload the '%' operator
	Complex operator % (Complex ob) {
	Complex temp;
	temp.real = real % ob.real;
	temp.img = img % ob.img;
	return temp;
	}
}; //end of the class

int main() {
	Complex c1(5,5), c2(5,5);
	c1.display();
	c2.display();
	
	Complex c3, c4, c5, c6, c7;
	c3 = c1 + c2;
	//c3 = c1.operator +(c2);
	c3.display();
	
	c4 = c2 - c1;
	c4.display();
	
	c5 = c1 * c2;
	c5.display();
	
	c6 = c2 / c1;
	c6.display();
	
	c7 = c2 % c1;
	c7.display();
return 0;
}
