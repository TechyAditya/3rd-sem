//Write a program to perform addition of two complex numbers using constructor overloading. The first constructor which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imaginary parts to equal values and third which takes two argument is used to initialize real and imaginary to two different values
#include <iostream>
using namespace std;
class COMPLEX
{
private:
    int n, i;

public:
    COMPLEX();
    COMPLEX(COMPLEX a)
    {
        n = a.n;
        i = a.i;
    }
    COMPLEX(COMPLEX x, COMPLEX y)
    {
        n = x.n + y.n;
        i = x.i + y.i;
    }
    void printData();
};

void COMPLEX::printData()
{

    if (i >= 0)
        cout << n << "+" << i << "i\n";
    else
        cout << n << i << "i\n";
}

void sum(COMPLEX x, COMPLEX y)
{
    COMPLEX result;
    result.n = x.n + y.n;
    result.i = x.i + y.i;
    if (result.i >= 0)
        cout << "Sum = " << result.n << " + " << result.i << "i\n";
    else
        cout << "Sum = " << result.n << " " << result.i << "i\n";
}

int main()
{
    COMPLEX x, y, s;
    cout << "Enter 1st complex number in the form x + yi: ";
    cin >> x.n >> x.i;
    cout << "Enter 2nd complex number in the form x + yi: ";
    cin >> y.n >> y.i; 
    COMPLEX z(y); //z=y
    COMPLEX s(x, y);//s=x+y
    z.printData();
    return 0;
}
