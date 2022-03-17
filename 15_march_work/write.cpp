#include <iostream>
#include <fstream>

using namespace std;

class Student{
    int roll;
    char name[25];
    float marks;

    void getdata() {
        cout << "Enter roll number and name: " << endl;
        cin >> roll >> name;
        cout << "marks: " << endl;
        cin >> marks;
    }

    public: void AddRecord() {
        fstream f;
        Student stu;
        f.open("student.dat", ios::app | ios::binary);
        stu.getdata();

        f.write((char *) &stu, sizeof(stu));
        f.close();
    }
};

int main(){
    Student s;
    char ch = 'n';
    do{
        s.AddRecord();
        cout << "Want to add more (y/n): " << endl;
        cin >> ch;
    } while(ch=='y' || ch=='Y');

    cout << "Updated !!!" << endl;

    return 0;
}
