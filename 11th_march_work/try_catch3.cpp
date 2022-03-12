#include<iostream>

using namespace std;

int main(){

    int a =1;
    try {
        try {
            throw a;
        }
        catch (int x){
            cout << "Exceptional in inner try-catch block";
            throw x;
        }
    }
    catch(int z){
        cout <<"\nExceptional in outer try-catch block" << endl;
    }

    return 0;
}