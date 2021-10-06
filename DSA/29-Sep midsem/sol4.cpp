#include <iostream>
#define pi 3.14159265358979323846264338327950
using namespace std;

class Shape
{
public:
    float l, h; //h=b in rectangle
};

class Dimension2 : public Shape
{
public:
    Dimension2();
};

class Dimension3 : public Shape
{
public:
    Dimension3();
};

class Rectangle : public Dimension2
{
    float area;

public:
    void outRect()
    {
        area = l * b;
        cout << "Area of Rectangle =" << area;
    }
    void input()
    {
        cout << "Enter dimensions: ";
        cin >> l >> b;
    }
};

class Circle : public Dimension2
{
    ;
};

class Dimension3 : public Shape
{
    ;
};

class Cylinder : public Dimension3
{
    ;
};

class Sphere : public Dimension3
{
    ;
};
