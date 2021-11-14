//WAP to find sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;

template <class S>
void sort(S arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                S temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int int_array[5];
    float float_array[5];
    cout << "Enter the integer array elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> int_array[i];
    }
    cout << "Enter the floating array elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> float_array[i];
    }
    sort(int_array, 5);
    sort(float_array, 5);
    cout << "After sorting they are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << int_array[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << float_array[i] << ", ";
    }
    return 0;
}
