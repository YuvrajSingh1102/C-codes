/*Program shows the function overloading */

#include <iostream>

using namespace std;
void sum(int n){
	cout << "number is: " << n << endl;
}

void sum(float n) {
	cout << "number is " << n << endl;
}

void sum(int n1, float n2) {
	cout << "number is: " << n1 << endl;
	cout << "number is: " << n2 << endl;

}
int main() {
	int n = 10;
	float m = 10.5;
	sum(n);
	sum(m);
	sum(n, m);


return 0;
}
