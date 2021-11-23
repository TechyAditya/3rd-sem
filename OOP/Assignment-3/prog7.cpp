//WAP to throw and handle’ array out of bound’ exception.
#include <iostream>
#define SIZE 5
using namespace std;
void show(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int i, a;
    cout << "Enter the index and data for what you want to change the value:";
    cin >> i >> a;
    try
    {
        if (i > SIZE - 1)
            throw i;
        else
            cout << "Value changed successfully.";
        arr[i] = a;
        show(arr);
    }
    catch (...)
    {
        cout << "Array out of bounds\n";
    }
    return 0;
}
