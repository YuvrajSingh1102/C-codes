#include <iostream>

using namespace std;

class ABC{
    public:
    void display() {
        cout << "This is parent class";
    }
};
class XYZ : public ABC{
    public:
    void display() {
        cout << "This is child class";
    }
};

int main() {

    ABC a1;
    a1.display();


    return 0;
}