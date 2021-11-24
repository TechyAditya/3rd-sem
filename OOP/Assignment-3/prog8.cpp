//WAP to demonstrate multiple catch and catch all
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    try
    {
        if (n == 0)
        {
            throw n;
        }
        else
            throw 1.1;
    }
    catch (int p)
    {
        cout << "Zero Exception catch";
    }
    catch (...)
    {
        cout << "Default Exception Catch";
    }
    return 0;
}
