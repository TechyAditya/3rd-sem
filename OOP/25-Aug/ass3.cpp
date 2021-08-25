//3. Write a program to find out the greatest between two numbers defined in two different classes by using friend function
#include <iostream>
using namespace std;
class Num
{
private:
    int n;

public:
    friend void compare(Num x, Num y);
    void input()
    {
        cin >> n;
    }
};

void compare(Num x, Num y)
{
    if (x.n < y.n)
        cout << x.n << " < " << y.n << endl;
    else if (x.n > y.n)
        cout << x.n << " > " << y.n << endl;
    else
        cout << x.n << " = " << y.n << endl;
}

int main()
{
    Num x, y;
    cout << "Enter 2 numbers: ";
    x.input();
    y.input();
    compare(x, y);
    return 0;
}