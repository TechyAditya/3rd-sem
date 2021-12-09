//Write a C++ program illustrating overloading function template by taking sum of numbers (max. Three) entered through keyboard.
#include <iostream>
using namespace std;
template <class t1>
void sum(t1 a, t1 b, t1 c)
{
    cout << "\nTemplate function 1: Sum = " << a + b + c << endl;
}

template <class t1, class t2>
void sum(t1 a, t1 b, t2 c)
{
    cout << "\nTemplate function 2: Sum = " << a + b + c << endl;
}

void sum(int a, int b)
{
    cout << "\nNormal function: Sum = " << a + b << endl;
}
int main()
{
    sum(4, 5, 9);
    sum(4, 5, (float)9.6);
    sum(4, 9);
    return 0;
}
