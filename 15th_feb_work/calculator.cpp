/*Calculator program which performs multiple operation like addition, substratction, multiplication etc.*/

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
	
	int add() 
	{
	return input1 + input2;
	}
	int mul() 
	{
	return input1 * input2;
	}
	int div() 
	{
	return input1 / input2;
	}
	int sub();
} obj1;   //end of class


int main()
{

	int op, num1, num2, again = 1, counter = 1;
	
	while(again == 1) 
	{
	cout << "Choose you option\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Factorial\n7.Exit\n"; 
	cin >> op;
	switch(op) 
	{
	
	
	case 1:
	cout << "Enter 2 number for addition:\n";
	cin >> num1 >> num2;
	obj1.setInput(num1, num2);
	cout << "Addition of 2 numbers are: " << obj1.add() << endl;
	break;

	case 2:
	cout << "Enter 2 number for subtraction:\n";
	cin >> num1 >> num2;
	obj1.setInput(num1, num2);
	cout << "Subtraction of 2 numbers are: " << obj1.sub() << endl;
	break;

	case 3:
	cout << "Enter 2 number for multiplication:\n";
	cin >> num1 >> num2;
	obj1.setInput(num1, num2);
	cout << "Multiplication of 2 numbers are: " << obj1.mul() << endl;
	break;

	case 4:
	cout << "Enter 2 number for division:\n";
	cin >> num1 >> num2;
	obj1.setInput(num1, num2);
	cout << "Division of 2 numbers are: " << obj1.div() << endl;
	break;

	case 5:
	cout << "Enter any number to find out square:\n";
	cin >> num1;
	cout << "Square of the number is: " << num1 * num1;
	break;

	case 6:
	cout << "Enter any number to find out factorial:\n";
	cin >> num1;

	for(int i = 1; i <= num1; i++) {
		counter = counter * i;
	}
	cout << "Factorial of the number is: " << counter;
	break;

	case 7:
	cout << "Thankyou\n";
	break;

	default:
	cout << "Invalid input\n";
	}
	cout << "\nDo you want to choose again\nPress 1 or 0\n";
	cin >> again;
}
return 0;
}

int Calculator::sub() {
	return input1 - input2;
}

