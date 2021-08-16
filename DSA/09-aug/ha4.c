//4. Write a program to replace every element in the dynamic array with the next greatest element present in the same array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int nge, i, j;
    for (i = 0; i < n; i++)
    {
        nge = -1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                nge = a[j];
                break;
            }
        }

        printf("%d ", nge);
    }
    return 0;
}