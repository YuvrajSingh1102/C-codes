// Program of overloading the new and delete operators

#include <iostream>

using namespace std;
class location {
	int lon;
	int lat;
	
	public:
	location() {
		cout << "Inside the default constructoe\n";
		lon = 0;
		lat = 0;
	}
	location(int x, int y) {
		cout << "Inside parameterized constructor\n";
		lon = x;
		lat = y;
	
	
	}
	void display()  {
		cout << "the location is=> long: " << lon << "  lat:" << lat << endl;
	
	}
	
	//overloading 'new' operator:
	void * operator new(size_t size) {
		cout << "Inside the overloaded new" << endl;
		void *ptr;
		ptr = malloc(size);
		if(ptr == NULL)
			cout << "No memory allotted\n";
		return ptr;
	}
	// overloading 'delete' operator
	void operator delete(void *ptr) {
		cout << "Inside the overloaded delete\n";
		free(ptr);
	}
};

class demo{
	int j = 22;
	public:
	
	demo() {
		cout << "Inside demo default\n";
	}




};

int main() {
	location loc1, loc2(20, 30);
	loc1.display();
	loc2.display();

	location *loc = new location;
	loc->display();
	
	delete loc;
	
	int *pt = new int;
	*pt = 100;
	
	cout << "-------------------" << endl;
	demo *d1 = new demo;
	delete d1;
return 0;
}
