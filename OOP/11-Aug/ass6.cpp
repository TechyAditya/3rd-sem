#include <iostream>
using namespace std;
int main()
{
    cout << "Armstrong numbers: ";
    for(int i = 100; i <= 1000; i++)
    {
        int sum = 0, temp = i;
        while (temp)
        {
            int temp2 = temp % 10;
            sum = sum + (temp2 * temp2 * temp2);
            temp /= 10;
        }
        if (sum == i)
            cout << i << ", ";
    }
    cout << "\b\b  "; //removing ,

    return 0;
}