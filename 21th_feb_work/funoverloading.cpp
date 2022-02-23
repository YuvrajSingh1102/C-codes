/*program to perform function overloading*/

#include <iostream>

using namespace std;

int myfun(int i);
int myfun(int i, int j);
int myfun(int i, int j, int k, char p);

int main() {
	cout << "Calling myfun(10): " << myfun(10) << endl;
	cout << "Calling myfun(10, 20): " << myfun(10, 20) << endl;
	cout << "Calling myfun(10, 20, 30, 1): " << endl;
return 0;
}

int myfun(int i) {
return i;
}

int myfun(int i, int j) {

return i + j;
}

int myfun(int i, int j, int k, char p) {
	return i+j+k+p;
}
