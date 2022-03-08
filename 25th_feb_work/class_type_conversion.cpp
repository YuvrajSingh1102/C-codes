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
		Time(int x, int y) {
			cout << "Parameterized constructor\n";
			hour = x * 60 / 10;
			min = y;
		}
		void display() {
			cout << "Time is: " << hour << min << endl;
		
		}

};

using namespace std;

int main(){
	Time t1(2,0);
	//int j = 126;
	
	//t1 = j;
	t1.display();

return 0;
}
