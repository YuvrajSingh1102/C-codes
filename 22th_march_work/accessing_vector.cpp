#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<char> v(10);
    vector<char>::iterator p;

    int i;

    p = v.begin();
    i = 0;

    while(p != v.end()){
        *p = i +'a';
        p++;
        i++;
    }
    cout << "Original contents are:\n";

    p = v.begin();

    
    while(p!=v.end()){
        cout << *p << " ";
        p++;
    }

    p = v.begin();

    while(p != v.end()){
        *p = toupper(*p);
        p++;
    }
    cout <<"\nModified contents are:\n";

    p= v.begin();

    p = v.insert(p,'z');
    v.erase(p);

    while(p != v.end()){
        cout << *p << " ";
        p++;
    }
    cout << endl;

    return 0;
}