#include <iostream>

using namespace std;

class base{
    
    public:
    void showBase() {
        cout << "Base\n";
    }

};
class derived : public base{
    public:
    void showDerived() {
        cout << "Derived\n";
    }

};

int main() {
    derived dv1;
    base* ptr;
    ptr = &dv1;
    dv1.showBase();
    cout << "Ptr = " << ptr << endl;

    ptr->showBase();
    //ptr->showDerived();
    ((derived *)ptr)->showDerived();
    return 0;
}