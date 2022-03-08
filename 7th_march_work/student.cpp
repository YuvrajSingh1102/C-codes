#include<iostream>

using namespace std;
class Student{
    public:
    int roll_num;
    char name;
};

class Test{
    public:

    int marks[5];
};

class Result : public Student, public Test{
    public:
    int total_marks = 0;
    float percentage;


void setInput()
{
    cout << "Enter the rollNumber: ";
    cin >> roll_num;
    cout << "Enter the name: ";
    cin >> name;
}
void setmarks()
{
    for(int i = 0; i < 5; i++) 
    {
        cout << "Enter the marks of subject ";
        cin >> marks[i];
    }
}

void Total() {
    for (int i = 0; i < 5; i++) {
    total_marks = total_marks + marks[i];
}

cout << "Total Marks of a student are:" << total_marks; 

}

void Percent() {
    percentage = (total_marks/500) * 100;
    cout << "Percentage of a student is:" << percentage;
}
};

int main() {

    Student s1;
    Test t1;
    Result r1;

    r1.setInput();
    r1.setmarks();
    r1.Total();
    r1.Percent();


    return 0;
}