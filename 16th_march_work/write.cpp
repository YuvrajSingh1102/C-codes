/*
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
    public: void display(int kcounter) {
        fstream f; 
        Student s;
        int funCounter = 0;        
        f.open("student.dat", ios::in|ios::binary);
        while(funCounter < kcounter) {
        
        f.read((char *) &s, sizeof(s));
        cout << "Roll: " << s.roll << endl <<"Name: " << s.name << endl << "Marks: " << s.marks << endl;
        funCounter++;
        }
        f.close();

    }
};

int main(){
    int count = 0;
    Student s;
    char ch = 'n';
    do{
        s.AddRecord();
        cout << "Want to add more (y/n): " << endl;
        cin >> ch;
        count++;
    } while(ch=='y' || ch=='Y');

    cout << "Updated !!!" << endl;

    s.display(count);

    return 0;
}

*/

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
    public: void display() {
        fstream f; 
        Student s;
        int funCounter = 0;        
        f.open("student.dat", ios::in|ios::binary);
        while(1) {
        
        f.read((char *) &s, sizeof(s));
        if(!f.eof()){
        cout << "Roll: " << s.roll << endl <<"Name: " << s.name << endl << "Marks: " << s.marks << endl;
     }
     else{
         break;
         }   //funCounter++;
        }
        f.close();

    }
};

int main(){
    //int count = 0;
    Student s;
    char ch = 'n';
    do{
        s.AddRecord();
        cout << "Want to add more (y/n): " << endl;
        cin >> ch;
        //count++;
    } while(ch=='y' || ch=='Y');

    cout << "Updated !!!" << endl;

    s.display();

    return 0;
}