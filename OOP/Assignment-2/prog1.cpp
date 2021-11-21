//1. Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.
#include <iostream>
#define pi 3.14159265358979323846264338327950
using namespace std;

class Shape
{
public:
    float l, h, area; //h=b in rectangle
    virtual void findArea() {}
    virtual void input() {}
};

class Circle : public Shape
{
public:
    void findArea()
    {
        area = pi * l * l;
        cout << "Area of Circle = " << area << " sq units";
    }
    void input()
    {
        cout << "Enter radius: ";
        cin >> l;
    }
};

class Square : public Shape
{
public:
    void findArea()
    {
        area = l * l;
        cout << "Area of Square = " << area << " sq units";
    }
    void input()
    {
        cout << "Enter side: ";
        cin >> l;
    }
};

class Triangle : public Shape
{
public:
    void findArea()
    {
        area = (l * h) / 2;
        cout << "Area of Triangle = " << area << " sq units";
    }
    void input()
    {
        cout << "Enter base and height: ";
        cin >> l >> h;
    }
};

int main()
{
    cout << "1. Circle\n"
         << "2. Square\n"
         << "3. Triangle\n"
         << "Enter your choice: ";
    int ch;
    cin >> ch;
    Shape *ptr;
    Circle c;
    Square sq;
    Triangle t;
    switch (ch)
    {
    case 1:
        ptr = &c;
        break;
    case 2:
        ptr = &sq;
        break;
    case 3:
        ptr = &t;
        break;
    default:
        cout << "Unknown choice";
        return 0;
    }
    ptr->input();
    ptr->findArea();
    return 0;
}
