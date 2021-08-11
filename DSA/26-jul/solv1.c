#include <stdio.h>
int main()
{
    int n, i, j, k, p;
    printf("Enter the total no. element of an array: ");
    scanf("%d", &n);
    int a[n], b[n], c[2 * n];
    printf("Enter array 1:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    j = n + n;//max limit
    printf("Enter array 2:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        c[j] = b[i];
        j++;
    }
    for (i = 0; i < j; i++)
    {
        for (k = i + 1; k < j; k++)
        {
            if (c[i] < c[j])
            {
                p = c[i];
                c[i] = c[j];
                c[j] = p;
            }
        }
    }
    printf("The sorted array: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
