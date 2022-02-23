/*Program to perform opeartion using static data*/

#include <iostream>

using namespace std;

class demo{			//class defination
	int count;
	public:

	void getcount() {
		count = 0;		
		cout << "Count= " << ++count << endl;
	}
};			//end of the class

int main() 
{
	//object declaration
	demo d1, d2, d3;
	d1.getcount();
	d2.getcount();
	d3.getcount();

return 0;
}
