/*Program demostrate the inline function*/

#include <iostream> 

using namespace std;

inline int cube(int n) {			//using inline variable in class 
	cout << "Inside the function" << endl << endl;
	return n*n*n*n;

}
int main() {
	
	cout << "The cube of the numbers is: " << cube(5) << endl;
	//cout << "Cube of the value 5 is: " << endl;
	cout << "Inside the function" << 5*5*5 << endl;
	
return 0;
}
