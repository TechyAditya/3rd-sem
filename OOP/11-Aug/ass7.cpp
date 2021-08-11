#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 elements of array: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Elements that satisfy given condition: ";
    for (int i = 0; i < 10; i++)
        if ((arr[i] % 2 == 0) && (arr[i] >= 100))
            cout << arr[i] << ", ";
    cout << "\b\b  ";

    return 0;
}