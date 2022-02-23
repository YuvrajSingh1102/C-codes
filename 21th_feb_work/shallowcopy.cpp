// Shallow copy in default constructor

#include <iostream>

using namespace std;

class demo{		//class defination
	int data1, data2, *p;
	
	public:
		demo() {
		p = new int;
		}
		
		void setVal(int i, int j, int k) {
			data1 = i;
			data2 = j;
			*p = k;
		}
		 
		void display() {
			cout << "Value for data1:" << data1 << " data2:" << data2 << " Pointer:" << *p << endl;
		
		}

}; // end of the class

int main() {

	demo d1;
	d1.setVal(10, 20, 30);
	d1.display();

// Call copy-constructor = shallow copy

	demo d3;
	d3 = d1;
	d3.display();
	
// update the  values
	d1.setVal(100, 200, 300);
	d1.display();
	d3.display(); // this will show us deep copy in pointer variable.
return 0;
}
