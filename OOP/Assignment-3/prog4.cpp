//WAP to find sort an integer array and a float array, using class template
#include <iostream>
using namespace std;
int n;
template <class T>
class Array
{
private:
    T *a;
    int n;

public:
    Array(int size)
    {
        n = size;
        a = new T[size];
    }
    void input()
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void sort()
    {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j])
                {
                    T temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    ~Array()
    {
        delete[] a;
    }
};

int main()
{
    cout << "Enter size of array n: ";
    cin >> n;
    cout << "\n1. INT operation"
         << "\n2. FLOAT operation"
         << "\n3. DOUBLE operation"
         << "\n> ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        Array<int> arr(n);
        arr.input();
        arr.sort();
        arr.display();
        break;
    }
    case 2:
    {
        Array<float> arr(n);
        arr.input();
        arr.sort();
        arr.display();
        break;
    }
    case 3:
    {
        Array<double> arr(n);
        arr.input();
        arr.sort();
        arr.display();
        break;
    }
    default:
        cout << "Wrong choice";
    }
    return 0;
}
