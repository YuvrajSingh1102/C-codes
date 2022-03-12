#include <iostream>
using namespace std;

class A{
	public:
	int a;
	void display1() {
	cout << "Inside the A" << endl;
	}
};

class B : virtual public A{
	public:
	int b;
	void display2() {
	cout << "Inside the B" << endl;
	}
};

class C : public virtual A{
	public:
	int c;
	
	void display3() {
	cout << "Inside the C" << endl;
	}
};

class D : public B , public C{
	public:
	int sum;
	
	void display4() {
	cout << "Inside the D" << endl;
	}
};
int main() {
	D ob1;
    ob1.a  =10;
    ob1.b  =10;
    ob1.c  =10;
    ob1.sum = ob1.a+ob1.b+ob1.c;
    cout << ob1.sum << endl;
return 0;
}
