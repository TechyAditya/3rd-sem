//WAP program to overload unary operator - using friend function
#include <iostream>
using namespace std;
class number
{
    int a, b;

public:
    number() { a = b = 0; }
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    void display();
    friend number operator-(number n);
};

void number::display()
{
    cout << "The numbers are: " << a << " " << b << endl;
}

number operator-(number n)
{
    n.a = -n.a;
    n.b = -n.b;
    return n;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    number n(a, b), num;
    n.display();
    num = -n;
    num.display();
}
