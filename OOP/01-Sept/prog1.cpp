//Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors. Create objects using different constructors and display them.
#include <iostream>
using namespace std;
class Complex
{
private:
    float r, i;

public:
    Complex()
    {
        cin >> r >> i;
    }
    Complex(float x, float y)
    {
        r = x, i = y;
    }
    void printData();
};

void Complex::printData()
{
    if (i < 0)
        cout << r << i << "i" << endl;
    else
        cout << r << "+" << i << "i" << endl;
}

int main()
{
    cout << "Enter 1st complex number in the form x + yi: ";
    Complex a;
    int x, y;
    cout << "Enter 2nd complex number in the form x + yi: ";
    cin >> x >> y;
    Complex b(x, y);
    a.printData();
    b.printData();
    return 0;
}
