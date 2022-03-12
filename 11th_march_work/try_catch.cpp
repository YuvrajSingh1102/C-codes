#include<iostream>

using namespace std;

int main(){

    int n1,n2,total;

    cout << "Enter the value of n1: ";
    cin >> n1;
    cout <<"Enter the value of n2: ";
    cin >> n2;

    try{
        if(n2==0){
            throw n2;
        } else {
            total = n1/n2;
            cout << "\nThe result is: " << total << endl;
        }

    }  

    catch(int x) {
        cout << "\nCant divide by: \n" << x;
    } 

    cout << "End of the program";

    return 0;
}