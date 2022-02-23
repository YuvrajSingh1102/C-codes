/*Program to perform opeartion using friend function*/

#include <iostream>

using namespace std;

class A			// Class A defination
{
	private:
	int numA;

	public:
	friend void add(A);			//Declaring friend function to class A
	void setA() {

	cout << "Inside set()" << endl; 
	}
};		//end of the class

class B			// Class B defination
{
	private:
	int numB;
	
	public:
	//friend void add(B);			////Declaring friend function to class B
	void setB() {
	cout << "Inside setB()" << endl;

	}
};		//end of the class

void add(A obj) 		//Friend fucntion defination
{
cout << "Inside add()" << endl;
//obj.numB = 10;
obj.numA = 20;
}
int main() {

	A obja;
	//B objb;
	obja.setA();
	//objb.setB();
	add(obja);
	//add(objb);

return 0;
}
