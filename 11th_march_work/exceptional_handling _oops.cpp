#include <iostream>

using namespace std;


class Test{
    public:
    int x;
    void read() {
        cout << "Enter a number= ";
        cin >> x;
    }

    class EVEN{};
    class ODD{};

    void check() {
        if(x%2==0) {
            throw EVEN();
        }
        else{
            throw ODD();
        }
    }
};
int main(){
    Test t1;
    t1.read();
    try {
        t1.check();
    }
    catch(Test :: EVEN) {
        cout << "Number is even\n";
    }
    catch(Test :: ODD) {
        cout << "Number is odd\n";
    }
    return 0;
}