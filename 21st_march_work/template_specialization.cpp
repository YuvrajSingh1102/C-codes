#include<iostream>

using namespace std;

template<class X> void swaap(X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside template swap.\n";
}

void swaap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside int specialization.\n";
}

int main() {
    int i = 10;
    int j = 20;

    double x = 10.1;
    double y = 23.3;

    char a = 'x';
    char b = 'z';

    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original x, y: " << x << ' ' << y << endl;
    cout << "Original a, b: " << a << ' ' << b << endl;

    swaap(i,j);
    swaap(x,y);
    swaap(a,b);

    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped x, y: " << x << ' ' << y << endl;
    cout << "Swapped a, b: " << a << ' ' << b << endl;

    return 0;
}