//8. WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, count = 0;
    printf("Enter n:");
    scanf("%d", &n);

    int *p = (int *)calloc(n, sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    for (int i = 0; i < n; i++)
    {
        if (!i)
            max = *(p + i);
        if (max == *(p + i))
            count++;
        if (max < *(p + i))
        {
            max = *(p + i);
            count = 1;
        }
    }

    printf("\nLargest number= %d", max);
    printf("\nOccurence= %d", count);

    return 0;
}