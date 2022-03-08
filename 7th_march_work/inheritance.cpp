#include <iostream>
using namespace std;
class Animal {
	public:
	int legs = 4;
	void display1() {
		cout << "Inside animal class" << endl;
		cout << "Legs are : " << legs;
	}
};

class Dog : public Animal{
	public:
	int tail = 1;
	void display2() {
		cout << "Inside Dog class" << endl;
		cout << "tails are : " << tail;
	}
};
int main() {
	Animal a1;
	Dog d1;
	
	a1.display1();
	//a1.display2();
	d1.display1();
	d1.display2();
	
	
return 0;
}
