/*Program to performe operation using friend fucntion*/

#include <iostream> 
using namespace std;

class base{			// class defination
	int val1, val2;
	public:
	void get() {
		cout << "Enter two values: ";
		cin >> val1 >> val2;
	}
	friend float mean(base ob);		//friend function declaration

}; 		// end of the class

float mean (base ob) {		//friend fucntion defination
	return float(ob.val1 + ob.val2)/2;

}

int main() {
	//object declaration
	base obj;
	obj.get();
	cout <<"\n Mean value is : " << mean(obj);
return 0;
}
