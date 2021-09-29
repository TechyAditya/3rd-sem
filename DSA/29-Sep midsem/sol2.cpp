#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }
    void output()
    {
        cout << "x= " << x << "\ty= " << y;
    }
};

int main()
{
    Point a(2, 3);
    Point b(a);
    b.output();
    return 0;
}