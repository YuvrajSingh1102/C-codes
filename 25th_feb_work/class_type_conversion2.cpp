// basic type to class type conversion
//Goal:- Convert basic type into Time type.
//Input:- Integer - 120, this is number of minutes.
//Output:- Time object, that has hr and min accordingly.
//int m = 120, Time t1 = m; -------->t1.hour = 2, t1.min = 0;

#include <iostream>

using namespace std;

class Time{
	int hour, min;
	public:
		Time() {
			cout << "Default constructor\n"; 
		}
		void operator = (int x, int y) {
			cout << "Parameterized constructor\n";
			
			hour = x * 60;
			min = y;
		
		}
		void display() {
			cout << "Time is: " << hour << "hr and " << min << " min " << endl;
		
		}

};



int main(){
	
	Time t1(2, 0);
	
	//t1 = j;
	t1.display();

return 0;
}
