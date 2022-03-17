#include <bits/stdc++.h>

using namespace std;
class Base{};
class Derived : public Base{};

int main() {
    try{
        throw Derived();
    }
    
    catch(Derived d) {
        cout << "Derived objects caught";
    }
    catch(Base b) {
        cout << "Base objects caught";
    }

    return 0;
}