//WAP to display data of two different types using class template with multiple arguments.
#include <iostream>
using namespace std;

template <class T1, class T2>
class obj
{
public:
    T1 a;
    T2 b;
    void display()
    {
        cout << a << endl
             << b << endl
             << "a*b=" << a * b << endl;
    }
};
int main()
{
    obj<int, float> s;
    cout << "Enter a integer number: " << endl;
    cin >> s.a;
    cout << "Enter a float number: " << endl;
    cin >> s.b;
    s.display();
    return 0;
}
