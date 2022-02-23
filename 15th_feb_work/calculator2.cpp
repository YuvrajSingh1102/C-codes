// Normal calculator with basic function addition.

#include <iostream> 

using namespace std;

class Calculator 
{
	public:
	int input1;
	int input2;

	void setInput(int a, int b) 
	{
		input1 = a;
		input2 = b;
	}
	int add(Calculator obj1, Calculator obj2) 
	{
	return obj1.input1 + obj2.input1;
	}
}obj1,obj2;

int main() 
{

	obj1.setInput(10,20);
	obj2.setInput(30,40);

	cout << "The sum of the inputs are: " << obj1.add(obj1, obj2) << endl;
	cout << "The sum of the inputs are: " << obj1.add(obj2, obj1) << endl;
return 0;
}
