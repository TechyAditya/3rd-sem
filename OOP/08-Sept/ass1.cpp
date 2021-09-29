//1. (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius of circle class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve this problem. . Show the result by accessing the area method of both the classes through the objects of rectangle class

#include <iostream>
#define pi 3.14159265358979323846264338327950
using namespace std;
class Circle
{
public:
    int area, r;
    float area_circle()
    {
        return pi * r * r;
    }
};

class Rectangle : public Circle
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
    Rectangle R;
    cout << "Enter radius of circle: ";
    cin >> R.r;
    cout << "Enter breadth of rectangle: ";
    cin >> R.b;
    cout << "\nArea of circle = " << R.area_circle() << " sq. units";
    cout << "\nArea of rectangle = " << R.area_rectangle() << " sq. units";

    return 0;
}
