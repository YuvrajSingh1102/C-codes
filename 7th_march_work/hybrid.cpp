#include <iostream>
using namespace std;

class A{
	public:
	int a = 1;
	void display1() {
	cout << "Inside the A" << endl;
	}
};

class B : public A{
	public:
	int b = 2;
	void display2() {
	cout << "Inside the B" << endl;
	}
};

class C : public A{
	public:
	int c = 3;
	
	void display3() {
	cout << "Inside the C" << endl;
	}
};

class D : public B , public C{
	public:
	int d = 4;
	
	void display4() {
	cout << "Inside the D" << endl;
	}
};
int main() {
	A a1;
	B b1;
	C c1;
	D d1;
	
	a1.display1();
	cout << endl;
	
	b1.display2();
	b1.display1();
	//b1.display4();
	cout << endl;
	
	c1.display3();
	c1.display1();
	cout << endl;
	
	d1.display4();
	d1.display2();
	d1.display3();
	//d1.display1();
	
return 0;
}
