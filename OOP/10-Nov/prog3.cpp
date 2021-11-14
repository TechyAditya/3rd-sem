//WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;

template <class t1, class t2>
void display(t1 a1, t2 a2)
{
    cout << "Number 1: " << a1 << endl;
    cout << "Number 2: " << a2 << endl;
    cout << "Addition of number: " << a1 + a2 << endl;
}

int main()
{
    int n1;
    float n2;
    cout << "Enter a integer number: " << endl;
    cin >> n1;
    cout << "Enter a float number: " << endl;
    cin >> n2;
    display(n1, n2);
}
