//WAP to throw and handle ‘division by zero’ exception.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter numbers x, y in x/y: ";
    float x, y, z;
    cin >> x >> y;
    try
    {
        if (y == 0)
            throw(y);
        z = x / y;
    }
    catch (float j)
    {
        cout << "Exception caught on dividing with 0";
        return -1;
    }
    cout << "z = " << z << endl;
    return 0;
}
