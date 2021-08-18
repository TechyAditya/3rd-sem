//WAP to calculate the area of rectangle, triangle and circle using the function area using function overloading
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846264338327950
using namespace std;
float area(float r)
{
    return PI * r * r;
}

float area(float b, float h)
{
    return b * h / 2;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - x) * (s - y) * (s - z));
}

int main()
{
    int ch, x, y, z;
    cout << "1. Area of Rectanngle\n"
         << "2. Area of Circle\n"
         << "3. Area of Triangle\n"
         << "Enter  the choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter 2 sides of rectangle: ";
        cin >> x >> y;
        cout << "Area of rectangle is " << area(x, y) << " sq units";
        break;
    case 2:
        cout << "Enter radius of circle: ";
        cin >> x;
        cout << "Area of circle is " << area(x) << " sq units";
        break;
    case 3:
        cout << "Enter sides of triangle: ";
        cin >> x >> y >> z;
        cout << "Area of triangle is " << area(x, y, z) << " sq units";
        break;
    default:
        cout << "Wrong choice";
    }
    return 0;
}