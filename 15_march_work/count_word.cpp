
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin;
   
    fin.open("data1.txt");
    int count = 0;
    char word;

    if(!fin) {
        cout << "file did not open" << endl;
    }
    else 
    {
        while(fin >> word){
            count++;
        }
        
    }
    cout << "Total words: " << count << endl;
        fin.close();


    return 0;
}
