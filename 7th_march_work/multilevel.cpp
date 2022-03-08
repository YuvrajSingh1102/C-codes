#include <iostream>
using namespace std;

class Person{
	public:
	int a = 1;
	void display1() {
	cout << "Inside the person" << endl;
	}
};

class Student : public Person{
	public:
	int b = 2;
	void display2() {
	cout << "Inside the student" << endl;
	}
};

class ITStudent : public Student {
	int c = 3;
	public:
	void display3() {
	cout << "Inside the ITStudent" << endl;
	}
};
int main() {
	Person p1;
	Student s1;
	ITStudent i1;
	
	p1.display1();
	//p1.display2();
	//p1.display3();
	
	s1.display1();
	s1.display2();
	//s1.display3();
	
	i1.display1();
	i1.display2();
	i1.display3();
	
	
	
return 0;
}
