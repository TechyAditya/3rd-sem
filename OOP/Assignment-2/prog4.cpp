//WAP to demonstrate the use of pure virtual function and abstract base class. Overload +,-,*,/ create a class rational having data members numerator, denominator, add, subtract, multiply and division of two rational numbers.
#include <stdio.h>
#include <iostream>
using namespace std;
int abs(int x) //cstdlib.h function
{
    if (x < 0)
        return -x;
    return x;
}

class base
{
    int numer;
    int denom;

public:
    void getdata()
    {
        cout << "Numerator: ";
        cin >> numer;
        cout << "Denominator: ";
        cin >> denom;
    }
    base operator+(base);
    base operator-(base);
    base operator*(base);
    base operator/(base);
    void simplify()
    {
        if (denom < 0) //always positive denominator
        {
            numer = -numer;
            denom = -denom;
        }
        for (int i = 2; i <= abs(numer) && i <= denom;)
            if (numer % i == 0 && denom % i == 0)
            {
                numer /= i;
                denom /= i;
            }
            else
                i++;
    }
    void display()
    {
        cout << "Rational number:\n"
             << numer << endl
             << "---" << endl
             << denom << endl;
    }
};
base base ::operator+(base c1)
{
    base temp;
    temp.numer = (numer * c1.denom) + (c1.numer * denom);
    temp.denom = denom * c1.denom;
    return temp;
}
base base ::operator-(base c1)
{
    base temp;
    temp.numer = (numer * c1.denom) - (c1.numer * denom);
    temp.denom = denom * c1.denom;
    return temp;
}
base base ::operator*(base c1)
{
    base temp;
    temp.numer = numer * c1.numer;
    temp.denom = denom * c1.denom;
    return temp;
}
base base ::operator/(base c1)
{
    base temp;
    temp.numer = numer * c1.denom;
    temp.denom = c1.numer * denom;
    return temp;
}
int main()
{
    base c, c1, c2;
    int n;
    cout << "Enter the data for first rational no.:\n";
    c1.getdata();
    cout << "Enter the data for second rational no.:\n";
    c2.getdata();

    cout << "\n1. Add"
         << "\n2. Subtract"
         << "\n3. Multiply"
         << "\n4. Divide"
         << "\nchoice> ";
    cin >> n;
    switch (n)
    {
    case 1:
        c = c1 + c2;
        break;
    case 2:
        c = c1 - c2;
        break;
    case 3:
        c = c1 * c2;
        break;
    case 4:
        c = c1 / c2;
        break;
    default:
        cout << "Unknown choice";
    }
    c.simplify();
    c.display();
    return 0;
}