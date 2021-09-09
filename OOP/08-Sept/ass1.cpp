//1. (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius of circle class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve this problem. . Show the result by accessing the area method of both the classes through the objects of rectangle class
#include <iostream>
using namespace std;
class circle
{

public:
    int area, r;
    float area_circle()
    {
        return 3.14 * r * r;
    }
};
class rectangle : public circle
{

public:
    int b;
    int area_rectangle()
    {
        return r * b;
    }
};

int main()
{
    rectangle R;
    cout << "enter radius of circle" << endl;
    cin >> R.r;
    cout << "enter breadth of rectangle" << endl;
    cin >> R.b;
    cout << "area of circle " << R.area_circle() << endl;
    cout << "area of rectangle " << R.area_rectangle() << endl;

    return 0;
}