/*Program of default arguments*/

#include <iostream> 
using namespace std;

int cubevolume(int x=5, int y=5, int z=10) {
	x = x++;
	y = y-1;
	z = z+x;
	return x*y*z;
}

int main() {

	cout << cubevolume() << endl;
	cout << cubevolume(9) << endl;
	cout << cubevolume(15, 12) << endl;
	cout << cubevolume(3, 4, 7) << endl;


return 0;
}
