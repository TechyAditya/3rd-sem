//3. (Hierarchical Inheritance) Modify the program no. LE6.1 as follows: Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member functions for this class to calculate the volume of the cylinder. Show the result by accessing the area method of circle and rectangle through object of rectangle class and the area of circle and volume method of cylinder class through the objects of cylinder class.

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

class Cylinder : public Circle
{
public:
    int h;
    int volume_cylinder()
    {
        return pi * r * r * h;
    }
};

int main()
{
    Rectangle R;
    Cylinder C;
    cout << "Enter radius of circle: ";
    cin >> C.r;
    cout << "Enter length of rectangle: ";
    cin >> R.r;
    cout << "Enter breadth of rectangle: ";
    cin >> R.b;
    cout << "Enter height of cylinder: ";
    cin >> C.h;
    cout << "\nArea of circle = " << C.area_circle() << " sq. units";
    cout << "\nVolume of cylinder = " << C.volume_cylinder() << " cu. units";
    cout << "\nArea of rectangle = " << R.area_rectangle() << " sq. units";

    return 0;
}
