/*Program to performe operation using friend fucntion*/

#include <iostream> 

using namespace std;

class XYZ;			//forward declaration

class ABC {			// class defination
	private: 
	int numA;

	public:
	void setdata() {
		numA = 10;
	}
	friend int add(ABC, XYZ);			//friend fucntion to class ABC.

};			// end of the class

class XYZ {			//class defination
	private:
	int numB;

	public:
	void setdata() {
		numB = 25;
	}
	friend int add(ABC, XYZ);			//friend fucntion to class XYZ.
};

int add(ABC objA, XYZ objB) {			//friend function defination.
	return (objA.numA + objB.numB);
}

int main() 
{
	//object declaration
	ABC objA;
	XYZ objB;
	objA.setdata();
	objB.setdata();
	cout << "Sum: " << add(objA, objB) << endl;

return 0;
}
