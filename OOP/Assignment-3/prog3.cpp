//WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;

template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << endl
         << b << endl
         << "a*b=" << a * b << endl;
}
int main()
{
    // display(10, 11.6);
    // display(12.9, 69);
    // display((double)16.7, 19);
    int n1;
    float n2;
    cout << "Enter a integer number: " << endl;
    cin >> n1;
    cout << "Enter a float number: " << endl;
    cin >> n2;
    display(n1, n2);
    return 0;
}
