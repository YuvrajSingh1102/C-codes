#include<iostream>

using namespace std;
class A{
    public:
    void displayA(){
        cout << "Inside the class A" << endl;
    }
};

class B{
    public:
    void displayB(){
        cout << "Inside the class B" << endl;
    }
};

class C : public A {
    public:
    void displayC(){
        cout << "Inside the class C" << endl;
    }
};

class D : public B {
    public:
    void displayD(){
        cout << "Inside the class D" << endl;
    }
};

class E : public C, public D {
    public:
    void displayE(){
        cout << "Inside the class E" << endl;
    }
};

class F : public E {
    public:
    void displayF(){
        cout << "Inside the class F" << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;

    a.displayA();
    b.displayA();
    b.displayC();
    b.displayD();

    f.displayA();
    f.displayC();
    f.displayB();
    f.displayE();
    
    e.displayA();
    e.displayB();
    e.displayC();

    return 0;
}