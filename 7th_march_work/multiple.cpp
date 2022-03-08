#include <iostream>
using namespace std;

class Liquid{
	public:
	int a = 1;
	void display1() {
	cout << "Inside the liquid" << endl;
	}
};

class Fuel{
	public:
	int b = 2;
	void display2() {
	cout << "Inside the fuel" << endl;
	}
};

class Petrol : public Liquid, public Fuel {
	public:
	int c = 3;
	
	void display3() {
	cout << "Inside the petrol" << endl;
	}
};
int main() {
	Liquid l1;
	Fuel f1;
	Petrol p1;
	
	p1.display1();
	p1.display2();
	p1.display3();
	
return 0;
}
