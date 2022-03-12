#include<iostream>

using namespace std;
class ABC{
    public:

    void setProtMemb(int i) {
        m_protMemb = i;
    }
    void display(){
        cout << m_protMemb << endl;
    }
    protected:
    int m_protMemb;
    void Protfunc() {
        cout << "\nAccess allowed\n";
    }

};
class XYZ : public ABC {
    public:
    void useProtfunc() {
        Protfunc();
    }
};


int main() {
    ABC a;
    XYZ x;
    a.m_protMemb;
    a.setProtMemb(0);
    a.display();
    a.Protfunc();
    x.setProtMemb(5);
    x.display();
    x.useProtFunc();


    return 0;
}