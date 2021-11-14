//Write a C++ program using function template to read two matrices of different data types such as integers and floating point values and find the sum of the matrices of integers and floating point numbers separately, and display the total sums of these arrays individually.
#include <iostream>
#include <iomanip>
using namespace std;

template <class M, class S>
void add(M a[3][3], S b[3][3])
{
    S c[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "   " << c[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int x[3][3], y[3][3];
    float g[3][3], h[3][3];
    int ch;

    //Reading of the  matrices
    cout << endl
         << "Enter values for Int matrix X:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Enter values for float matrix g:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> g[i][j];
        }
        cout << endl;
    }

    //Display matrices as entered by user
    cout << endl
         << endl
         << "Int matrix X:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Float matrix G:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << g[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl
         << "Result of Addition of matrix X and G : " << endl;
    add(x, g);
    return 0;
}
