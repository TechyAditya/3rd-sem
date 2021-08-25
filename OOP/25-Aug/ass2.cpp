//2. Write a program to find out the area of one rectangle and one square by using a suitable friend function named as area() for it
#include <iostream>
using namespace std;
class Square
{
private:
    int s;

public:
    friend void area(Square x);
    void input()
    {
        cout << "Enter side: ";
        cin >> s;
    }
};

class Rectangle
{
private:
    int l, b;

public:
    friend void area(Rectangle x);
    void input()
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }
};

void area(Square x)
{
    cout << "Area of square = " << x.s * x.s << " sq units" << endl;
}

void area(Rectangle x)
{
    cout << "Area of rectangle = " << x.l * x.b << " sq units" << endl;
}

int main()
{
    int ch;
    cout << "1. Square\n"
         << "2. Rectangle\n"
         << "Enter the choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        Square sq;
        sq.input();
        area(sq);
        break;
    case 2:
        Rectangle r;
        r.input();
        area(r);
        break;
    default:
        cout << "Wrong choice";
    }

    return 0;
}