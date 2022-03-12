#include<iostream>

using namespace std;

class Shape
{
    protected:
    float x;

    public:

    void getData(){
        cin >> x;
    }
    virtual float calculateArea() = 0;
};

class Square : public Shape
{
    public:
    float calculateArea(){
        return 3.14 * x * x;
    }
};

class Circle : public Shape
{
    public:
    float calculateArea(){
        return 3.14 * x * x;
    }
};

int main()
{
    Square s;
    Circle c;
    cout << "Enter length to calculate the area of a square: ";
    s.getData();

    cout << "Area of the square: " << s.calculateArea() << endl;
    cout << "Enter the radius of the circle to calculate the area: ";
    c.getData();
    cout << "Area of the circle: " << c.calculateArea() << endl;

    return 0;
}