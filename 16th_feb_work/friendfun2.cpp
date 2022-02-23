//Program to perform operation using friend function

#include <iostream> 

using namespace std;

class numbers{			// class defination
	int num1, num2;

	public:
	void setdata(int a, int b);
	friend int add(numbers N);		// friend function to class numbers

}; // end of the class

void numbers :: setdata (int a, int b) {
	num1 = a;
	num2 = b;
}

int add(numbers N) 		//Friend function defination
{
	return (N.num1 + N.num2);
}

int main() 
{
	//object declaration
	numbers N1;
	N1.setdata(10, 20);
	cout << "Sum = " << add(N1) << endl;


return 0;
}
