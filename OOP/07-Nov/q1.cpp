//1. Write a program to accept 10 integers in an array. Check all numbers in the array. When any negative number is found, throw an exception.
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    printf("Enter 10 positive numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        try
        {
            if (arr[i] < 0)
                throw(arr[i]);
        }
        catch (int j)
        {
            cout << "Exception caught by entering negative number";
            return -1;
        }
    }
    cout << "All numbers are positive";
    return 0;
}