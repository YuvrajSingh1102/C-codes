#include <iostream>
#include<exception>
using namespace std;

//bad allocation exception

int main() {

    try {
        int * myarray = new int[100];
    }
    catch(exception &e) {
        cout << "Std exception" << e.what() << endl;
    
    }
    cout << "End of the program";
    

    return 0;
}