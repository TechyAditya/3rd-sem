//3. Define a class called Triangle, with two fields as base and height to calculate the area of a triangle. The class contains two methods such as getData() to initialize the fields of a triangle and areaTrin () to calculate the area of a triangle
#include <iostream>
using namespace std;

class Triangle
{
private:
    float base, height, area;

public:
    void getData();
    void areaTrin();
    void output();
} t;

void Triangle::areaTrin()
{
    area = base * height / 2;
}

void Triangle::getData()
{
    cout << "Enter base and height: ";
    cin >> base;
    cin >> base >> height;
}

void Triangle::output()
{
    cout << "Area of triangle is " << area << " sq units" << endl;
}

int main()
{
    t.getData();
    t.areaTrin();
    t.output();
    return 0;
}