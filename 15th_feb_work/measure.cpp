/*This program that calculate area and volume*/

#include<iostream>

using namespace std;

class Measure {		//class defination
	public:
		int length;
		int width;
		int height;

		void setInput(int l, int w, int h) {		//setting values to class variable
			length = l;
			width = w;
			height = h;
		}
		int area() {		//function to calculate area
			return length * width;
		}
		int volume() {		//function to calculate volume
			return length * width * height;
		}
}obj1,obj2;		//end of the class & Object defination

int main() {

	obj1.setInput(10,20,30);		//setting values
	cout << "Area of the object 1 is: " << obj1.area() << endl;
	cout << "Volume of the object 1 is: " << obj1.volume() << endl;

	obj2.setInput(40,50,60);
	cout << "Area of the object 1 is: " << obj2.area() << endl;
	cout << "Volume of the object 1 is: " << obj2.volume() << endl;


return 0;
}
