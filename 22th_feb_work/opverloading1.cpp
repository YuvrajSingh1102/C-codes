// Code for operator overloading : + - / % usinf friend functions

#include <iostream>

using namespace std;

class Complex {			//class definations
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
	
	Complex operator +=(Complex obj) {
		Complex temp;
		temp.real = obj.real + real + 10;
		temp.img = obj.img + img + 10;
		return temp;
	}
	
	Complex operator -=(Complex obj) {
		Complex temp;
		temp.real = obj.real - real - 10;
		temp.img = obj.img - img - 10;
		return temp;
	}
	
	friend Complex operator + (Complex, Complex);
	friend Complex operator *= (Complex obj, Complex obj2);
	friend Complex operator /= (Complex obj, Complex obj2);
	
}; //end of the class

Complex operator + (Complex obj, Complex obj2) {
	Complex temp;
	temp.real = obj.real + obj2.real;
	temp.img = obj.img + obj2.img;
	return temp;
	}
	
Complex operator *= (Complex obj, Complex obj1) {
	Complex temp;
	temp.real = obj.real * obj1.real * 10;
	temp.img = obj.img * obj1.img * 10;
	return temp;
}

Complex operator /= (Complex obj, Complex obj1) {
	Complex temp;
	temp.real = (obj.real / obj1.real) / 10;
	temp.img = (obj.img / obj1.img) / 10;
	return temp;
}
int main() {

	Complex c1(1,1), c2(5,5);
	c1.display();
	c2.display();
		
	Complex c3, c4, c5, c6, c7;
	c3 = c1 + c2;
	//c3 = c1.operator + (c2);
	c3.display();
	
	cout << "Overloading += operator" << endl;
	c4 = c1 += c2;
	c4.display();
	
	cout << "Overloading -= operator" << endl;
	c5 = c1 -= c2;
	c5.display();
	
	cout << "Overloading *= operator" << endl;
	c6 = c1 *= c2;
	c6.display();
	
	cout << "Overloading /= operator" << endl;
	c7 = c1 /= c2;
	c7.display();
	
return 0;
}
