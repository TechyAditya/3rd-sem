//2. Write a program to sort an array of integers using a function pointer in descending order and resort this array in ascending order using virtual function. 
#include <iostream>
using namespace std;
class a
{
public:
    virtual void sort_ascending(int *arr, int n)
    {
        int i, temp, j;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "\n** Array sorted in ASCENDING order (in class a) **" << endl;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
class b : public a
{
public:
    void sort_ascending(int *arr, int n)
    {
        int i, temp, j;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "\n** Array sorted in ASCENDING order (in class b) **" << endl;
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
void sort_des(int *arr, int n)
{
    int i, temp, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\n** Array sorted in DESCENDING order (using function pointer) **" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, i;
    a a1, *ptra;
    b b1;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n** Entered Array **" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    void (*fptr)(int *, int){&sort_des};
    fptr(arr, n);
    ptra = &b1;
    ptra->sort_ascending(arr, n); // sorting in ascending order using virtual function
    return 0;
}
