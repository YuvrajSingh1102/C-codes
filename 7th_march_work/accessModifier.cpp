#include <iostream>
using namespace std;

class A{

    protected:
    int y = 20;

	public:
	int z = 10;
    void display1() {
        cout << "Values of Z, Y , X are:" << z << y << endl;
    }
    //private:
    //int x = 30;
    
};

class B : public A{
	public:

    void display2() {
        cout << "Values of Z, Y , X are:" << z << y << endl;
    }
};
class C : public A{
	public:
    
    void display3() {
        cout << "Values of Z, Y , X are:" << z << y << endl;
    }
};
int main() {
	A a1;
	B b1;
	C c1;
	
	
	a1.display1();
    b1.display2();
    c1.display3();
	
return 0;
}