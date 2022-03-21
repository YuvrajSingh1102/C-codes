#include <iostream>

using namespace std;
template <class T, class U>

void swaper(T num1, U num2) {

    cout << "Values before swap: " << endl;
    cout << "num1: "<<num1 << endl;
    cout << "num2: "<< num2 << endl;
    T temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Values after swap: " << endl;
    cout << "num1: "<<num1 << endl;
    cout << "num2: "<< num2 << endl;
    
    
}
int main() {

    int a = 10, b = 20;

    int m1;

    double x = 2.2, y = 2.5;

    swaper(a,b);
    swaper(x,y);
    
    return 0;
}