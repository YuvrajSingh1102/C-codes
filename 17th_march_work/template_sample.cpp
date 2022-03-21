#include<iostream>

using namespace std;
template <typename T>

T sum (T n1, T n2){
    T rs;
    rs = n1 + n2;

    return rs;
}
int main() {

    int A = 10, B = 20;
    int C;
    long a = 11, b = 22;
    long c;

    C= sum(A,B);

    cout << "The sum of the int is: " << C << endl;

    c = sum(a,b);

    cout << "The sum of the long is: " << c << endl;


    return 0;
}