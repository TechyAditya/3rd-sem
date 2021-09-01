//Write a program to perform addition of two complex numbers using constructor. Complex numbers are given through user input
#include <iostream>
using namespace std;
class COMPLEX
{
private:
    int n, i;

public:
    COMPLEX()
    {
        cin >> n >> i;
    }
    COMPLEX(COMPLEX x, COMPLEX y)
    {
    n = x.n + y.n;
    i = x.i + y.i;
    if (i >= 0)
        cout << "Sum = " << n << " + " << i << "i\n";
    else
        cout << "Sum = " << n << " " << i << "i\n";
    }
};

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
    cout << "Enter 1st complex number in the form x + yi: ";
    COMPLEX x;
    cout << "Enter 2nd complex number in the form x + yi: ";
    COMPLEX y;
    COMPLEX(x, y);
    return 0;
}
