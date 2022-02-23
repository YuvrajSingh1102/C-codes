/*Program to perform operation using friend function*/

#include <iostream> 

using namespace std;
class square;			//foraward declaration
class Rectangle{			//class defination
	int width = 5;
	int height = 6;

	public: 
	friend void display(Rectangle, square);			//friend fucntion to class Reactangle.
};			//end of the class

class square {			//class defination
	int side = 9;

	public:
	friend void display(Rectangle, square);			//friend function to class Square.
};

void display(Rectangle r, square s) {			//function defination.
	cout << "Reactangle: " << r.width * r.height << endl;
	cout << "Square: " << s.side  * s.side << endl;


}
int main() {
	//object declaration.
	Rectangle rec;
	square sq;
	display (rec, sq);



return 0;
}
