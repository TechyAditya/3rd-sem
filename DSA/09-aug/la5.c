//LA-5.	Given an unsorted dynamic array of size n, WAP to find and display the number of elements between two elements a and b (both inclusive). 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter unsorted elements of an array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int lower, upper;
    if (a > b)
    {
        upper = a;
        lower = b;
    }
    else
    {
        upper = b;
        lower = a;
    }

    int ctr = 0;
    printf("Elements between upper and lower: ");
    for (int i = 0; i < n; i++)
        if (arr[i] <= upper && arr[i] >= lower)
        {
            ctr++;
            printf("%d, ", arr[i]);
        }

    printf("\nNumber of elements between %d and %d is %d", lower, upper, ctr);
    return 0;
}
