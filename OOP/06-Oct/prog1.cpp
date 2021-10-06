//WAP program to overload unary operator - using member function
#include <iostream>
using namespace std;
class number
{
    int a, b;

public:
    number() {}
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    void display();
    void operator-();
};

void number::display()
{
    cout << "The numbers are: " << a << " " << b << endl;
}

void number::operator-()
{
    a = -a;
    b = -b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    number n(a, b);
    n.display();
    -n;
    n.display();
}
