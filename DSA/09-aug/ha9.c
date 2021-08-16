//9. You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter n:");
    scanf("%d", &n);

    int array[n];

    printf("Enter elements of array (only 0 & 1): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
            count++;
    }

    printf("Segregated array: [");
    for (int i = 0; i < count; i++)
        printf("0, ");

    for (int i = 0; i < n - count; i++)
        printf("1, ");

    printf("\b\b] ");

    return 0;
}