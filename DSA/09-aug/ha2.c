//2. WAP to find out the second smallest and second largest element stored in a dynamic array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y;

    printf("Enter size of array:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int l1, l2, s1, s2;
    if (arr[0] > arr[1])
    {
        l1 = arr[0];
        l2 = arr[1];
        s1 = arr[1];
        s2 = arr[0];
    }
    else
    {
        l1 = arr[1];
        l2 = arr[0];
        s1 = arr[0];
        s2 = arr[1];
    }

    for (int i = 2; i < n; i++)
    {
        if (l1 < arr[i])
        {
            l2 = l1;
            l1 = arr[i];
        }
        if (s1 > arr[i])
        {
            s2 = s1;
            s1 = arr[i];
        }
    }
    printf("\nSmallest and second smallest elements are %d and %d", l1, l2);
    printf("\nLargeest and second largest elements are %d and %d", s1, s2);

    return 0;
}