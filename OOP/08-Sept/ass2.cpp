//2. (Multilevel Inheritance) Modify the program no.  (1) as follows: Derive a class named as BOX from RECTANGLE class. Take necessary data & member functions for this box class to calculate the volume of the box. All the data members are initialized through the constructors. Show the result by accessing the area method of circle and rectangle and the volume method of box class through the objects of box class.

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

class Box : public Rectangle
{
public:
    int h;
    int volume_box()
    {
        return r * b * h;
    }
};

int main()
{
    Box R;
    cout << "Enter radius of circle: ";
    cin >> R.r;
    cout << "Enter breadth of rectangle: ";
    cin >> R.b;
    cout << "Enter height of box: ";
    cin >> R.h;
    cout << "\nArea of circle = " << R.area_circle() << " sq. units";
    cout << "\nArea of rectangle = " << R.area_rectangle() << " sq. units";
    cout << "\nVolume of box = " << R.volume_box() << " cu. units";

    return 0;
}
