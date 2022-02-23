/*Program to perform operation using functions*/

#include <iostream>

using namespace std;

class Calculator {			//class defination
	public:
	int input1;
	int input2;

	void setInput(int a, int b) {
		input1 = a;
		input2 = b;
	}
	Calculator add(Calculator obj1, Calculator obj2) {		//function declaration of class object with return type object.
	Calculator obj3;
	obj3.input1 = obj1.input1 + obj2.input1;
	obj3.input2 = obj1.input2 + obj2.input2;
	return obj3;

	}
};			//end of the class

int main() 
{
	//objets declarations.
	Calculator obj1, obj2, obj3;
	obj1.setInput(10, 20);
	obj2.setInput(20, 30);
	obj3 = obj1.add(obj1, obj2);
	cout << "Result: " << obj3.input1 << " " << obj3.input2 << endl;


return 0;
}
