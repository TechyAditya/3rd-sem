//1. Write a program to find out the area of an rectangle through friend function and member function separately of Rectangle class
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float l, b;

public:
    void input();
    friend void friendlyArea(Rectangle x);
    void notSoFriendlyArea();
};

void friendlyArea(Rectangle x)
{
    cout << "Area of rectangle in friend function = " << x.l * x.b << endl;
}

void Rectangle::notSoFriendlyArea()
{
    cout << "Area of rectangle in member function = " << l * b << endl;
}

void Rectangle::input()
{
    cout << "Enter length and breadth: ";
    cin >> l >> b;
}

int main()
{
    Rectangle r;
    r.input();
    friendlyArea(r);
    r.notSoFriendlyArea();
    return 0;
}
