//WAP to find sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;
int m, n;
template <class T>
void sort(T a[100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

template <class T>
void inp(T x[100][100])
{
    cout << "Enter elements of matrix: ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> x[i][j];
}

int main()
{
    cout << "Enter size of matrix m * n: ";
    cin >> m >> n;
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
        int x[100][100];
        inp(x);
        sort(x);
        break;
    }
    case 2:
    {
        float x[100][100];
        inp(x);
        sort(x);
        break;
    }
    case 3:
    {
        double x[100][100];
        inp(x);
        sort(x);
        break;
    }
    default:
        cout << "Wrong choice";
    }
    return 0;
}
