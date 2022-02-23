/*Program to perform opeartion usinf static data member*/

#include <iostream>

using namespace std;

class demo {			//class defination
	static int count;		//defining static variable
	public:
	void getcount() {
		cout << "Count=" << ++count << endl;
	}
};			//end of the class

int demo :: count;
int main() 
{
	//objects declaration
	demo d1, d2, d3;
	d1.getcount();
	d2.getcount();
	d3.getcount();

return 0;
}
