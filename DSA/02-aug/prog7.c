//Merge 2 array of same size sorted in descending order
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr[n + n], desc[n + n];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    //combining the arrays
    for (int i = 0; i < n; i++)
        arr[i] = arr1[i];
    for (int i = n; i < n + n; i++)
        arr[i] = arr2[i - n];

    //linear sort
    for (int i = 1; i < n + n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    //descending array 
    for (int i = 0; i < n + n; i++)
        desc[i] = arr[n + n - i - 1];

    printf("Array in descending order: ");
    for(int i = 0; i < n + n; i++)
        printf("%d ", desc[i]);

    return 0;
}