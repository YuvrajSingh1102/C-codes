/*Program to perform operation using functions with creating and objects*/

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
	int add(Calculator obj1, Calculator obj2) {
	return obj1.input1 + obj2.input2;


	}
};			//end of the class

int main() 
{
	//object declaration
	Calculator obj1, obj2, obj3;
	obj1.setInput(5, 5);
	obj2.setInput(10, 10);
	cout << "The inputs are: " << obj1.input1 <<  " " << obj1.input2 << endl;
	cout << "The sum of the inputs are: " << obj1.add(obj1, obj2) << endl;

return 0;
}
