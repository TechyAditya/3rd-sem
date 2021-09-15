//3. WAP in C++ that demonstrates default, parameterize and copy constructor in the same program.
#include <iostream>
using namespace std;
class ClassName
{
private:
    int i;

public:
    ClassName()
    {
        cout << "Default constructor" << endl;
    }
    ClassName(int x)
    {
        cout << "Parameterised constructor where value passed is " << x << endl;
        i = x;
    }
    ClassName(ClassName &z)
    {
        cout << "Copy constructor" << endl;
        i = z.i;
    }
};
int main()
{
    ClassName a;
    ClassName b(2);
    ClassName c(b);
    return 0;
}
