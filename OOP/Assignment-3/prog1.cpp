//Write a C++ program using function template to read two matrices of different data types such as integers and floating point values and find the sum of the matrices of integers and floating point numbers separately, and display the total sums of these arrays individually.
#include <iostream>
using namespace std;
int m, n;
template <class T>
void add(T x[100][100])
{
    typeof(x[0][0]) sum;
    sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += x[i][j];
    cout << "Sum of elements = " << sum << endl;
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
        add(x);
        break;
    }
    case 2:
    {
        float x[100][100];
        inp(x);
        add(x);
        break;
    }
    case 3:
    {
        double x[100][100];
        inp(x);
        add(x);
        break;
    }
    default:
        cout << "Wrong choice";
    }
    return 0;
}
