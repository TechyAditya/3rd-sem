#include <iostream>
using namespace std;
int main()
{
    int num, pal = 0;
    cout << "Enter number: ";
    cin >> num;
    int temp = num;
    while (temp)
    {
        pal = (pal * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == pal)
        cout << "Number is palindrome";
    else
        cout << "Number is not palindrome";

    return 0;
}
